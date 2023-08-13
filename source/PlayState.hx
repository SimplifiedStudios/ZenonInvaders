package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.input.keyboard.FlxKey;
import flixel.util.FlxColor;

class PlayState extends FlxState
{
	// Configuration For Physics
	var GroundedLevel = 700;
	var MaximumAddon = 100;

	var Player:FlxSprite;

	override public function create()
	{
		super.create();
		Player = new FlxSprite();
		Player.makeGraphic(50, 50, FlxColor.WHITE);
		Player.x = 0;
		Player.y = 700;
		add(Player);
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
		detectingMovement();

		if (Player.y != GroundedLevel)
		{
			Player.y += 1;
		}
	}

	public function detectingMovement()
	{
		if (FlxG.keys.anyPressed([FlxKey.SPACE, FlxKey.UP]))
		{
			if (Player.y == GroundedLevel)
			{
				Player.y += MaximumAddon / 2;
			}
		}

		if (FlxG.keys.anyPressed([FlxKey.A, FlxKey.LEFT]))
		{
			if (0 >= Player.x)
			{
				return;
			}
			else
			{
				Player.x -= 30;
			}
		}

		if (FlxG.keys.anyPressed([FlxKey.D, FlxKey.RIGHT]))
		{
			if (Player.x >= 1390)
			{
				return;
			}
			else
			{
				Player.x += 30;
			}
		}
	}
}
