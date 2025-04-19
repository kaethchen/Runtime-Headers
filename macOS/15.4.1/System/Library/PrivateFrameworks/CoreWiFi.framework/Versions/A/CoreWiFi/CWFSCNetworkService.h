@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkService : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    struct __SCPreferences { } *_prefsRef;
    BOOL _isMonitoringEvents;
    NSString *_serviceID;
    NSString *_serviceName;
}

@property (copy) id /* block */ eventHandler;
@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (readonly, copy, nonatomic) NSString *serviceID;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)serviceName;
- (id)IPv4Addresses;
- (id)IPv6Addresses;
- (id)initWithInterfaceName:(id)a0;
- (id)DHCPv6ServerID;
- (id)IPv4NetworkSignature;
- (id)DHCPServerID;
- (id)IPv6NetworkSignature;
- (id)IPv4SubnetMasks;
- (id)DHCPLeaseExpirationTimestamp;
- (id)DHCPLeaseStartTimestamp;
- (id)DNSDomainName;
- (id)DNSServerAddresses;
- (id)IPv4ARPResolvedIPAddress;
- (id)IPv4ConfigMethod;
- (id)IPv4Router;
- (id)IPv4ARPResolvedHardwareAddress;
- (id)IPv6ConfigMethod;
- (id)IPv6Router;
- (id)__DHCPInfo;
- (id)__DHCPStateConfig;
- (id)__DHCPv6StateConfig;
- (id)__DNSSetupConfig;
- (id)__DNSStateConfig;
- (id)__IPv4SetupConfig;
- (id)__IPv4StateConfig;
- (id)__IPv6SetupConfig;
- (id)__IPv6StateConfig;
- (id)__proxiesSetupConfig;
- (void)__refreshNotificationKeys;
- (BOOL)__refreshServiceID;
- (id)__serviceStateConfig;
- (BOOL)__updateServiceID;
- (BOOL)isMonitoringEvents;
- (BOOL)refreshServiceID;
- (void)restartEventMonitoring;
- (void)startEventMonitoring;
- (void)stopEventMonitoring;

@end
