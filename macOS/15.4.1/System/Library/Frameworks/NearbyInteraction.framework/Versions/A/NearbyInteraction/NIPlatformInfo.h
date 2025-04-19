@interface NIPlatformInfo : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)supportsNBAMMS;
+ (BOOL)supportsUWB;
+ (BOOL)supportsARKit;
+ (BOOL)supportsAoA;
+ (BOOL)supportsSyntheticAperture;

@end
