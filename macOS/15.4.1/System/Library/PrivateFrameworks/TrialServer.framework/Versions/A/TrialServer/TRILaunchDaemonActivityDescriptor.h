@class NSString;

@interface TRILaunchDaemonActivityDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long supportedTaskCapabilities;

+ (id)inexpensiveNetworkingDescriptor;
+ (id)cellularDescriptor;
+ (id)clientHotfixCellularAllowBatteryDescriptor;
+ (id)clientHotfixWifiDescriptor;
+ (id)clientTriggeredCellularDescriptor;
+ (id)clientTriggeredWifiDescriptor;
+ (id)launchDaemonActivityDescriptorWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;
+ (id)maintenanceWorkDescriptor;
+ (id)postUpgradeDescriptor;
+ (id)postUpgradeDescriptorRequireInexpensiveNetworking;
+ (id)retryFailuresDescriptor;
+ (id)setupAssistantFetchDescriptor;
+ (id)taskQueueDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementName:(id)a0;
- (id)copyWithReplacementSupportedTaskCapabilities:(unsigned long long)a0;
- (id)initWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;
- (BOOL)isEqualToLaunchDaemonActivityDescriptor:(id)a0;

@end
