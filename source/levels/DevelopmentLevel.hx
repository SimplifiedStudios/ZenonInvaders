package levels;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxSpriteGroup;
import flixel.input.keyboard.FlxKey;
import flixel.math.FlxRandom;
import flixel.util.FlxColor;
import lime.system.System;

class DevelopmentLevel extends FlxState
{
	// * Assets
	var Character:FlxSprite;
	var Ground:FlxSprite;
	var Platform1:FlxSprite;
	//* Character Configuration
	var SpawnCoords = [0, 600];
	var GroundLevel = 650;

	var Bullets = new FlxSpriteGroup();
	var Enemys = new FlxSpriteGroup();

	public override function create()
	{
		super.create();
		Character = new FlxSprite();
		Character.makeGraphic(50, 50, FlxColor.WHITE);
		Character.x = SpawnCoords[0];
		Character.y = SpawnCoords[1];
		add(Character);
	}

	public override function update(elapsed:Float)
	{
		super.update(elapsed);

		// Physics and Movement Calculation :D
		locomotionCalculation();
		bulletAndEnemyCalculation();
	}

	public function bulletAndEnemyCalculation()
	{
		if (FlxG.keys.anyPressed([FlxKey.SPACE]))
		{
			var Bullet = new FlxSprite(Character.x, Character.y);
			Bullet.makeGraphic(30, 30, FlxColor.WHITE);
			add(Bullet);

			Bullets.add(Bullet);
		}

		for (v in Enemys)
		{
			v.y += 0.3;

			if (v.y == 700)
			{
				v.destroy();
			}

			FlxG.collide(v, Character, removePlayer);
		}

		if (Math.random() >= 0.9)
		{
			spawnEnemy();
		}

		for (v in Bullets)
		{
			for (n in Enemys)
			{
				FlxG.collide(v, n, endEnemy);
			}
		}

		for (i in Bullets)
		{
			i.y -= 10;

			if (i.y == 0)
			{
				i.destroy();
			}
		}
	}

	public function locomotionCalculation()
	{
		if (Character.y != GroundLevel)
		{
			Character.y += 2;
		}

		if (FlxG.keys.anyPressed([FlxKey.D, FlxKey.RIGHT]))
		{
			Character.x += 10;
		}

		if (FlxG.keys.anyPressed([FlxKey.LEFT, FlxKey.A]))
		{
			Character.x -= 10;
		}
	}

	public function endEnemy(Obj:FlxSprite, Ob:FlxSprite)
	{
		Obj.destroy();
		Ob.destroy();
	}

	public function removePlayer(Obj:FlxSprite, OtherObj:FlxSprite)
	{
		FlxG.switchState(new MenuState());
	}

	public function spawnEnemy()
	{
		var Enemy = new FlxSprite();
		Enemy.makeGraphic(50, 50, FlxColor.RED);
		Enemy.x = FlxG.random.int(0, 900);
		add(Enemy);

		Enemys.add(Enemy);
	}
}
