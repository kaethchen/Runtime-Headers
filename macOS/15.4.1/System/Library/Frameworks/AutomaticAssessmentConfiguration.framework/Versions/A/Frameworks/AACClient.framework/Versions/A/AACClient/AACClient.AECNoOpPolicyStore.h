@interface AACClient.AECNoOpPolicyStore : _TtCs12_SwiftObject <AEPolicyStore>

@property (nonatomic, readonly) void /* unknown type, empty encoding */ exists;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ hasPersistentData;

- (BOOL)cleanUpPolicyStoreWithError:(id *)a0;
- (id)readOnlyScratchpadForIdentifier:(id)a0;
- (id)writeOnlyScratchpadForIdentifier:(id)a0;

@end
