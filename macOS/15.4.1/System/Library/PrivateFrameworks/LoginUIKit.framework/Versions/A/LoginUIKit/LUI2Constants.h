@interface LUI2Constants : NSObject

@property (class, readonly) double primaryShadowOpacity;
@property (class, readonly) double primaryShadowRadius;
@property (class, readonly) double secondaryShadowOpacity;
@property (class, readonly) double secondaryShadowRadius;
@property (class, readonly) double userPictureDiameter;

+ (double)primaryShadowOpacity;
+ (double)primaryShadowRadius;
+ (double)secondaryShadowOpacity;
+ (double)secondaryShadowRadius;
+ (double)userPictureDiameter;

@end
