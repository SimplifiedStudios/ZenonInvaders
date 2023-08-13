package;

import sys.FileSystem;

@:build(flixel.system.FlxAssets.buildFileReferences("assets", true))
class AssetPaths
{
	public static function image(text:String, ending:String)
	{
		return "assets/images/" + text + "." + ending;
	}
}
