@interface RMModelPayloadUtilities : NSObject

+ (BOOL)_isCurrentVariantSupportedForDetails:(id)a0;
+ (id)_walkObject:(id)a0 keyPath:(id)a1 fullKeyPath:(id)a2;
+ (id)effectiveSupportedOS:(id)a0 overriddenSupportedOS:(id)a1;
+ (BOOL)isSupportedForPlatform:(long long)a0 scope:(long long)a1 enrollmentType:(long long)a2 supportedOS:(id)a3;
+ (BOOL)isSupportedForPlatform:(long long)a0 scope:(long long)a1 supportedOS:(id)a2;
+ (id)valueFromKeyPath:(id)a0 payload:(id)a1;

@end
