package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.input.keyboard.FlxKey;
import flixel.util.FlxColor;

class MainMenuState extends FlxState
{
	// * Movement
	var Width = FlxG.width;
	var GroundLevel = 10;

	// * Player
	var Player:FlxSprite;

	public override function create()
	{
		Player = new FlxSprite();
		Player.makeGraphic(50, 50, FlxColor.WHITE);
		Player.x = 0;
		Player.y = 700;
		add(Player);

		super.create();
	}

	public override function update(elapsed)
	{
		super.update(elapsed);

		locomotionSystem();
	}

	public function locomotionSystem()
	{
		if (FlxG.keys.anyPressed([FlxKey.UP]))
		{
			Player.y -= 10;
		}

		if (FlxG.keys.anyPressed([FlxKey.DOWN]))
		{
			Player.y += 10;
		}

		if (FlxG.keys.anyPressed([FlxKey.LEFT]))
		{
			Player.x -= 10;
		}

		if (FlxG.keys.anyPressed([FlxKey.RIGHT]))
		{
			Player.x += 10;
		}
	}
}
