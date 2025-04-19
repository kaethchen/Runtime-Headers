@interface TFCapabilities : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)hasExtendedColorDisplay;
+ (BOOL)isHardwareKeyboardAttached;

- (id)init;

@end
