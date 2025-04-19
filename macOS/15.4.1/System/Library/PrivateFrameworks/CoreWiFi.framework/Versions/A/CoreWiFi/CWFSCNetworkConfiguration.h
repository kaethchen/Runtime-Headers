@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkConfiguration : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)IPv4Addresses;
- (id)IPv6Addresses;
- (id)IEEE80211NetworkInterfacesNames;
- (id)IPv4SubnetMasks;
- (id)DNSDomainName;
- (id)DNSServerAddresses;
- (id)IPv4Router;
- (id)IPv4ServiceID;
- (id)IPv4ServiceName;
- (id)IPv6ServiceName;
- (id)DNSSearchDomains;
- (id)IPv4InterfaceName;
- (id)IPv6InterfaceName;
- (id)IPv6PrefixLengths;
- (id)IPv6Router;
- (id)IPv6ServiceID;
- (id)__DNSGlobalStateConfig;
- (id)__IPv4GlobalStateConfig;
- (id)__IPv4SetupConfigForServiceID:(id)a0;
- (id)__IPv4StateConfigForServiceID:(id)a0;
- (id)__IPv6GlobalStateConfig;
- (id)__IPv6SetupConfigForServiceID:(id)a0;
- (id)__IPv6StateConfigForServiceID:(id)a0;
- (BOOL)__isIEEE80211NetworkInterfaceName:(id)a0;
- (id)__nameForServiceWithID:(id)a0;
- (id)__networkInterfaceStateConfig;
- (void)__startEventMonitoring;
- (BOOL)isMonitoringEvents;
- (id)networkInterfaceNames;
- (void)restartEventMonitoring;
- (void)startEventMonitoring;
- (void)stopEventMonitoring;

@end
