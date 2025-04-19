@interface IFPlatformInfo : NSObject

@property (readonly) unsigned long long nativePlatform;

+ (id)sharedInstance;

- (unsigned long long)platformFromPlatformStrings:(id)a0;

@end
