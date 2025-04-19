@class NSString, NSArray, NSNumber;
@protocol MTLDevice;

@interface PKRequiredMetalDevice : NSObject

@property (retain) id<MTLDevice> currentDevice;
@property (readonly, retain) NSString *deviceName;
@property (readonly, retain) NSArray *supportedFeatureSets;
@property (readonly) BOOL isLowPowerDevice;
@property (readonly) BOOL isHeadless;
@property (readonly) BOOL isRemovable;
@property (readonly) NSNumber *argumentBuffersTier;
@property (readonly) BOOL rasterOrderGroupsSupported;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithDevice:(id)a0;

@end
