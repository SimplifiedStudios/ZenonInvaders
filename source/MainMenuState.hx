package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.input.keyboard.FlxKey;
import flixel.input.keyboard.FlxKeyboard;
import flixel.util.FlxColor;

class MainMenuState extends FlxState
{
	var character:FlxSprite;

	// * Physics Configuration
	var GroundedLevel = 700;

	public override function create()
	{
		// * Initilizing The Character
		character = new FlxSprite();
		character.makeGraphic(50, 50, FlxColor.WHITE);
		add(character);

		super.create();
	}

	public override function update(elapsed:Float)
	{
		super.update(elapsed);

		locomotionSystem();
	}

	public function locomotionSystem()
	{
		if (character.y != GroundedLevel)
		{
			character.y += 2;
		}

		if (character.y == GroundedLevel)
		{
			if (FlxG.keys.anyPressed([FlxKey.UP, FlxKey.SPACE]))
			{
				character.y -= 60;
			}
		}

		if (FlxG.keys.anyPressed([FlxKey.A, FlxKey.LEFT]))
		{
			character.x -= 10;
		}

		if (FlxG.keys.anyPressed([FlxKey.D, FlxKey.RIGHT]))
		{
			character.x += 10;
		}
	}
}
