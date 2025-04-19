@class NSMutableSet;

@interface BrokenBackhaulMetric : NSObject {
    NSMutableSet *_ingressWifiInputTypes;
    NSMutableSet *_egressWifiInputTypes;
    NSMutableSet *_ingressCellInputTypes;
    NSMutableSet *_egressCellInputTypes;
    unsigned int _ingressWifiTcpProgressScore;
    unsigned int _egressWifiTcpProgressScore;
}

@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned int previousState;
@property (nonatomic) unsigned long long stateHeldForSecs;
@property (nonatomic) unsigned long long stateCellUsageBytes;
@property (nonatomic) unsigned int ingressTrigger;
@property (nonatomic) unsigned int egressTrigger;
@property (nonatomic) unsigned char ingressTriggerInterfaceType;
@property (nonatomic) unsigned char egressTriggerInterfaceType;

- (void).cxx_destruct;
- (id)initWithState:(unsigned int)a0;
- (id)eventPayload;
- (void)_populateNetworkPropertiesOnCellRelay:(id)a0 isIngress:(BOOL)a1;
- (void)_populateNetworkPropertiesOnWiFiRelay:(id)a0 isIngress:(BOOL)a1;
- (void)_populateWifiPropertiesToCAPayload:(id)a0 isIngress:(BOOL)a1;
- (void)populateNetworkPropertiesOnWiFiRelay:(id)a0 cellRelay:(id)a1 isIngress:(BOOL)a2;
- (BOOL)postCAEvent;

@end
