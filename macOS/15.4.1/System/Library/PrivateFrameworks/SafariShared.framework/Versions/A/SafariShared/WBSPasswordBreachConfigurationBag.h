@class NSString, NSDictionary;

@interface WBSPasswordBreachConfigurationBag : NSObject <WBSRemotelyUpdatableDataSnapshot> {
    NSDictionary *_bag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)snapshotData;
- (id)firstConfigurationForSupportedProtocolVersion:(unsigned long long)a0 rampIdentifier:(unsigned long long)a1 allowValuesForTesting:(BOOL)a2;
- (id)initWithBagDictionary:(id)a0;
- (id)initWithSnapshotData:(id)a0 error:(id *)a1;

@end
