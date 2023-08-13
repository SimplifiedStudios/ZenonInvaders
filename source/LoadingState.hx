package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;

class LoadingState extends FlxState
{
	private var LoadingPercentage = 0;

	var text:FlxText;

	override public function create()
	{
		super.create();

		var background = new FlxSprite(0, 0, AssetPaths.image("mainbg", "jpeg"));
		background.screenCenter();
		add(background);

		text = new FlxText(0, 0, "Loading...", 16);
		text.screenCenter();
		add(text);
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
		text.text = "Loading: " + LoadingPercentage;
		LoadingPercentage += 1;

		if (LoadingPercentage == 100)
		{
			FlxG.switchState(new PlayState());
		}
	}
}
