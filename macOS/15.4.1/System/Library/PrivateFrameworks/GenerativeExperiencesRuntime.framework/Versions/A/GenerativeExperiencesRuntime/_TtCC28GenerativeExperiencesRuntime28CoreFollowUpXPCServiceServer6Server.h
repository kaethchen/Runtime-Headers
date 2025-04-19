@interface _TtCC28GenerativeExperiencesRuntime28CoreFollowUpXPCServiceServer6Server : NSObject <GMCoreFollowUpXPCServiceProtocol> {
    void /* unknown type, empty encoding */ clientApplicationIdentifier;
    void /* unknown type, empty encoding */ manager;
}

- (id)init;
- (void).cxx_destruct;
- (void)clearAllCFUsWith:(id /* block */)a0;
- (void)pendingCFUsWith:(id /* block */)a0;
- (void)postAutoEnablementNotificationWithForce:(BOOL)a0 with:(id /* block */)a1;
- (void)postOutOfStorageCFUWithForce:(BOOL)a0 remainingSpaceRequired:(unsigned long long)a1 with:(id /* block */)a2;
- (void)runOutOfStorageCheckWithForce:(BOOL)a0 with:(id /* block */)a1;

@end
