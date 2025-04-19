@interface FileProviderDaemon.OldVersionClonesEventsDelegate : _TtCs12_SwiftObject <FPFSChangeSubscriptionDelegate> {
    void /* unknown type, empty encoding */ fileTree;
}

- (void)subscriptionHandleDroppedEvent:(id)a0;
- (void)subscription:(id)a0 handleEventAtPath:(id)a1 targetItemID:(unsigned long long)a2 eventID:(unsigned long long)a3 flags:(unsigned int)a4;
- (void)subscription:(id)a0 handleResetWithReason:(long long)a1;
- (void)subscriptionDidHandleBatchOfEvents:(id)a0;
- (void)subscriptionHandleTermination:(id)a0;
- (void)subscriptionWillHandleBatchOfEvents:(id)a0;

@end
