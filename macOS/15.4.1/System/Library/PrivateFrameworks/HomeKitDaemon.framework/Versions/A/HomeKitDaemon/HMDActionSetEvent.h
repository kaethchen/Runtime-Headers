@class NSUUID, NSString, HMDHome, NSArray;

@interface HMDActionSetEvent : HMMDatedHomeLogEvent <HMDBiomeLogEvent> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) unsigned long long triggerSource;
@property (readonly, copy, nonatomic) NSUUID *actionSetUUID;
@property (readonly, copy, nonatomic) NSUUID *actionSetUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleId;
@property (readonly, copy, nonatomic) NSUUID *transactionId;
@property (readonly, copy, nonatomic) NSString *clientMetricIdentifier;
@property (readonly, nonatomic) unsigned int numAccessoriesModified;
@property (readonly, nonatomic) unsigned int numAccessoriesInHome;
@property (readonly, nonatomic) unsigned int numNonEmptyScenesInHome;
@property (readonly, copy, nonatomic) NSString *serializedIdentifier;
@property (readonly, copy, nonatomic) NSString *actionSetName;
@property (readonly, copy, nonatomic) NSString *actionSetType;
@property (readonly, weak, nonatomic) HMDHome *home;
@property (readonly, copy) NSString *homeName;
@property (readonly, copy, nonatomic) NSArray *accessoryUUIDs;
@property (readonly, copy, nonatomic) NSArray *accessoryUniqueIdentifiers;

- (void).cxx_destruct;
- (id)initWithActionSet:(id)a0 source:(unsigned long long)a1 numAccessories:(unsigned int)a2 bundleId:(id)a3 transactionId:(id)a4;
- (id)biomeEventsRepresentationForLogObserver:(id)a0;

@end
