@class NSValue, NSData;

@interface AVOutputDeviceIcon : NSObject

@property (readonly, nonatomic) NSValue *pixelSize;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic, getter=isPrerendered) BOOL prerendered;

- (void)dealloc;
- (id)initWithDict:(id)a0;

@end
