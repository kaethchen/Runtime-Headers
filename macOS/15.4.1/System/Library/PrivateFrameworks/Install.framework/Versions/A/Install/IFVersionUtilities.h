@interface IFVersionUtilities : NSObject

+ (id)_bundlePathForVersPath:(id)a0 withDestinationPath:(id)a1;
+ (id)_trimVersionString:(id)a0;
+ (long long)compareVersions:(id)a0 :(id)a1;
+ (id)makeTupleFromDict:(id)a0;
+ (id)makeTupleFromString:(id)a0;
+ (void)performPackageVersionCheckForVolume:(id)a0 packageControllers:(id)a1 messages:(id)a2;

@end
