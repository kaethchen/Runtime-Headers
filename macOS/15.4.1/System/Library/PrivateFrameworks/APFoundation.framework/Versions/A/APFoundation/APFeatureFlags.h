@interface APFeatureFlags : NSObject

@property (class, readonly, nonatomic) BOOL onDeviceAttributionEnabled;
@property (class, readonly, nonatomic) BOOL onDeviceConversionEnabled;
@property (class, readonly, nonatomic) BOOL modernDataCollectionEnabled;
@property (class, readonly, nonatomic) BOOL actionStoreEnabled;
@property (class, readonly, nonatomic) BOOL experimentationReportEnabled;

@end
