@class HMFPreferences;

@interface HMDHAPAccessoryDefaultDataSource : NSObject <HMDHAPAccessoryDataSource>

@property (nonatomic, readonly) void /* unknown type, empty encoding */ swiftDataSource;
@property (nonatomic, readonly) HMFPreferences *preferences;

- (id)init;
- (void).cxx_destruct;

@end
