@interface _TtC14ReplicatorCoreP33_586791E780FEDC6114754B28ABA431B16Client : NSObject <ReplicatorServices.ReplicatorControlXPCServer> {
    void /* unknown type, empty encoding */ pid;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ lock_descriptors;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)setEnabledWithParameters:(id)a0 error:(id *)a1;
- (BOOL)addIDToAllowListWithParameters:(id)a0 error:(id *)a1;
- (id)allowListAndReturnError:(id *)a0;
- (id)devicesAndReturnError:(id *)a0;
- (BOOL)enableAllowListWithParameters:(id)a0 error:(id *)a1;
- (id)isAllowListEnabledAndReturnError:(id *)a0;
- (id)isEnabledAndReturnError:(id *)a0;
- (id)localDeviceAndReturnError:(id *)a0;
- (void)pairWithParameters:(id)a0 completion:(id /* block */)a1;
- (id)pushTokenWithParameters:(id)a0 error:(id *)a1;
- (BOOL)removeFromAllowListWithParameters:(id)a0 error:(id *)a1;
- (BOOL)retryStuckRelationshipsAndReturnError:(id *)a0;
- (BOOL)setAllowListWithParameters:(id)a0 error:(id *)a1;
- (BOOL)unavailableWithParameters:(id)a0 error:(id *)a1;
- (BOOL)unpairWithParameters:(id)a0 error:(id *)a1;

@end
