@interface RMFeatureFlags : NSObject

@property (class, readonly, nonatomic, getter=isAppDistributionPVEnabled) BOOL AppDistributionPVEnabled;
@property (class, readonly, nonatomic, getter=isDiskManagementSubscriberEnabled) BOOL DiskManagementSubscriberEnabled;
@property (class, readonly, nonatomic, getter=isFileConduitEnabled) BOOL FileConduitEnabled;
@property (class, readonly, nonatomic, getter=isHTTPConduitEnabled) BOOL HTTPConduitEnabled;
@property (class, readonly, nonatomic, getter=isManagedAppsEnabled) BOOL ManagedAppsEnabled;
@property (class, readonly, nonatomic, getter=isNetworkEAPConfigurationEnabled) BOOL NetworkEAPConfigurationEnabled;
@property (class, readonly, nonatomic, getter=isNetworkWiFiConfigurationEnabled) BOOL NetworkWiFiConfigurationEnabled;
@property (class, readonly, nonatomic, getter=isAppleInternal) BOOL appleInternal;
@property (class, readonly, nonatomic, getter=hasBridgeOS) BOOL hasBridgeOS;

@end
