@class NSImage;

@interface LACUIIcon : NSObject

@property (class, nonatomic, readonly) NSImage *genericIcon;

+ (id)imageForPath:(id)a0;
+ (id)imageForBundleIdentifier:(id)a0;

- (id)init;

@end
