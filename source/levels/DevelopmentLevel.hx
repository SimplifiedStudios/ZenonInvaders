package levels;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.input.keyboard.FlxKey;
import flixel.util.FlxColor;

class DevelopmentLevel extends FlxState
{
	// * Player Controller Configuration
	var GroundLevel = 700;
	var LeftWall = 0;
	var RightWall = FlxG.width;
	var SpawnCoords = [0, 600]; // X, Y

	// * Assets
	var Character:FlxSprite;

	public override function create()
	{
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
	}

	public function locomotionCalculation()
	{
		if (Character.y != GroundLevel)
		{
			Character.y += 2;
		}

		if (Character.y > GroundLevel)
		{
			Character.y = 700;
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
}
