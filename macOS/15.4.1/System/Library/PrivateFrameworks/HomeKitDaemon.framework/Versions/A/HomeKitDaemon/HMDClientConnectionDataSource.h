@protocol HMDCarPlayDataSource;

@interface HMDClientConnectionDataSource : NSObject <HMDClientConnectionDataSource>

@property (readonly) id<HMDCarPlayDataSource> carPlayDataSource;
@property (readonly) BOOL supportsDeviceLock;
@property (readonly) BOOL isDeviceLocked;

- (id)init;
- (void).cxx_destruct;

@end
