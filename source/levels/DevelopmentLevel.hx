package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.ui.FlxText;
import flixel.util.FlxPoint;
import flixel.util.FlxTimer;

class PlayState extends FlxState
{
	var player:FlxSprite;
	var platforms:FlxGroup;
	var goal:FlxSprite;

	override public function create():Void
	{
		super.create();

		// Create player sprite
		player = new FlxSprite(50, 50);
		player.makeGraphic(20, 20, 0xff0000ff); // Blue square
		player.acceleration.y = 300;
		player.maxVelocity.x = 150;
		player.maxVelocity.y = 200;
		add(player);

		// Create platforms
		platforms = new FlxGroup();
		createPlatforms();
		add(platforms);

		// Create goal sprite
		goal = new FlxSprite(250, 200);
		goal.makeGraphic(20, 20, 0xff0000ff); // Blue square
		add(goal);
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);

		// Player movement
		player.acceleration.x = 0;
		if (FlxG.keys.LEFT)
			player.acceleration.x -= player.maxVelocity.x * 4;
		if (FlxG.keys.RIGHT)
			player.acceleration.x += player.maxVelocity.x * 4;

		// Jumping logic
		if (FlxG.keys.justPressed.SPACE && player.isTouching(FlxObject.FLOOR))
		{
			player.velocity.y = -150;
		}

		// Check for collisions
		FlxG.collide(player, platforms);
		FlxG.overlap(player, goal, onGoalOverlap);
	}

	// Function to create platforms
	function createPlatforms():Void
	{
		// You can adjust the positions and dimensions as needed
		platforms.add(new FlxSprite(0, 220).makeGraphic(100, 10, 0xff00ff00)); // Green platform
		platforms.add(new FlxSprite(150, 180).makeGraphic(100, 10, 0xff00ff00)); // Green platform
	}

	// Callback when player overlaps with goal
	function onGoalOverlap(player:FlxObject, goal:FlxObject):Void
	{
		// Implement your goal logic here
	}
}
