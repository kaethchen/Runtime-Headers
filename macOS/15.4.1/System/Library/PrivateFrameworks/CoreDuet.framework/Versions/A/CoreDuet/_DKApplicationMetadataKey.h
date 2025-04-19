@interface _DKApplicationMetadataKey : NSObject

+ (id)exactBundleVersion;
+ (id)launchReason;
+ (id)processIdentifier;
+ (id)shortVersionString;
+ (id)backboardState;
+ (id)dyldPlatform;
+ (id)extensionContainingBundleIdentifier;
+ (id)extensionHostIdentifier;
+ (id)isNativeArchitecture;

@end
