@class NSString, NSMutableIndexSet, BKHIDEventDeliveryManager, BKHIDDomainServiceServer, BSMutableIntegerMap;
@protocol BKHIDEventDeliveryManagerServerRuleChangeAuthority;

@interface BKHIDEventDeliveryManagerServer : NSObject <BKSHIDEventDeliveryManagerServerInterface, BKHIDDomainServiceDelegate> {
    BKHIDDomainServiceServer *_server;
    NSMutableIndexSet *_observerPIDs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSMutableIntegerMap *_resolutionsByPID;
    BKHIDEventDeliveryManager *_deliveryManager;
    id<BKHIDEventDeliveryManagerServerRuleChangeAuthority> _ruleChangeAuthority;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)connectionDescriptionForDeferringRuleIdentity:(id)a0;
- (id)deliveryGraphDescription;
- (id)resolutionDescriptionForEventDescriptor:(id)a0 senderDescriptor:(id)a1;
- (id)resolutionDescriptionForKeyCommand:(id)a0 senderDescriptor:(id)a1;
- (oneway void)selectDeferringTargetForPredicate:(id)a0;
- (oneway void)submitRuleChanges:(id)a0;
- (void)connectionDidTerminate:(id)a0 process:(id)a1;
- (id)initWithDeliveryManager:(id)a0 ruleChangeAuthority:(id)a1;

@end
