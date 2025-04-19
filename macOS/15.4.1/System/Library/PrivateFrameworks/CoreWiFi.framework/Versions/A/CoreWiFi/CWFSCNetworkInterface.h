@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkInterface : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    BOOL _isMonitoringEvents;
}

@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (readonly, copy, nonatomic) NSString *hardwareAddress;
@property (copy) id /* block */ eventHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)IPv4Addresses;
- (id)IPv6Addresses;
- (id)initWithInterfaceName:(id)a0;
- (id)IPv4SubnetMasks;
- (id)IPv6Flags;
- (id)IPv4BroadcastAddresses;
- (id)IPv6PrefixLengths;
- (id)__IPv4StateConfig;
- (id)__IPv6StateConfig;
- (id)__linkStateConfig;
- (id)__networkInterfaceHardwareAddress;
- (void)__startEventMonitoring;
- (id)airPortSetupConfiguration;
- (id)airPortStateConfiguration;
- (BOOL)isLinkActive;
- (BOOL)isMonitoringEvents;
- (void)restartEventMonitoring;
- (void)startEventMonitoring;
- (void)stopEventMonitoring;

@end
