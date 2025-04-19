@class NSString, NSArray, NSValue, NSURL, NSNumber;

@interface AVOutputDeviceScreenInfo : NSObject

@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSArray *inputCapabilities;
@property (readonly, nonatomic, getter=isLimitedUI) BOOL limitedUI;
@property (readonly, nonatomic) NSArray *limitedUIElements;
@property (readonly, nonatomic, getter=isNightMode) BOOL nightMode;
@property (readonly, nonatomic) NSNumber *maxFPS;
@property (readonly, nonatomic) NSValue *physicalSize;
@property (readonly, nonatomic) NSValue *pixelSize;
@property (readonly, nonatomic) NSNumber *viewHeightScaleFactor;
@property (readonly, nonatomic) NSValue *squarePixelSize;
@property (readonly, nonatomic) NSString *primaryInputDevice;
@property (readonly, nonatomic) BOOL cornerMasks;
@property (readonly, nonatomic) NSArray *viewAreas;
@property (readonly, nonatomic) NSURL *applicationURL;
@property (readonly, nonatomic) NSURL *initialApplicationURL;

- (void)dealloc;
- (id)initWithDict:(id)a0;

@end
