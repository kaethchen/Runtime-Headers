@class WFMeasureResult, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface WFMeasure : NSObject

@property (nonatomic) BOOL isInProgress;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSString *interfaceName;
@property (retain, nonatomic) NSString *gatewayAddress;
@property (retain, nonatomic) NSMutableSet *dnsServers;
@property (retain, nonatomic) NSString *publicDNSAddress;
@property (retain, nonatomic) NSString *testDNSHostname;
@property (retain, nonatomic) NSString *testReason;
@property (nonatomic) BOOL isPeriodicTest;
@property (nonatomic) BOOL isSiriTimeout;
@property (nonatomic) BOOL isApsdTimeout;
@property (nonatomic) BOOL isRetest;
@property (nonatomic) BOOL isParis;
@property (nonatomic) unsigned int tclass;
@property (retain, nonatomic) WFMeasureResult *result;

+ (BOOL)isOnSupportedPlatform;

- (id)description;
- (void).cxx_destruct;
- (void)abort;
- (void)dispatchDNSTest:(id)a0;
- (void)dispatchPingTest:(unsigned long long)a0;
- (void)dispatchSiriTest:(long long)a0 trafficClass:(unsigned int)a1;
- (void)dispatchThroughputTest;
- (BOOL)doDNSResolution:(id)a0 timeout:(long long)a1;
- (BOOL)doPing:(id)a0 count:(long long)a1 timeout:(long long)a2 size:(long long)a3 class:(long long)a4 minRTT:(long long *)a5 maxRTT:(long long *)a6 successCount:(long long *)a7;
- (void)doThroughputTest;
- (unsigned int)getApsdSampleTrafficClass;
- (void)getLazyNSNumberPreference:(id)a0 exists:(id /* block */)a1;
- (void)getLazyNSStringPreference:(id)a0 exists:(id /* block */)a1;
- (unsigned int)getPeriodicSampleTrafficClass;
- (unsigned int)getTimeoutSampleTrafficClass;
- (id)initWithType:(unsigned long long)a0 andReason:(id)a1 prevTestedOptions:(unsigned long long)a2 andInterfaceName:(id)a3;
- (void)retrieveNetworkConfigurations;
- (BOOL)shouldApsdSampleSiriTCP;
- (BOOL)shouldApsdSampleSiriTLS;
- (BOOL)shouldPeriodicSampleSiriTCP;
- (BOOL)shouldPeriodicSampleSiriTLS;
- (BOOL)shouldTimeoutSampleSiriTCP;
- (BOOL)shouldTimeoutSampleSiriTLS;
- (BOOL)start:(id /* block */)a0 withCompletionQueue:(id)a1;

@end
