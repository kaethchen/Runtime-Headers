@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface VCConnectionStatisticsCollector : NSObject {
    NSMutableDictionary *_packetCountsHistorySent;
    NSMutableDictionary *_packetCountsHistoryRecv;
    unsigned int _currentPacketSentCount[256];
    unsigned int _currentPacketRecvCount[256];
    unsigned int _currentPacketSentUpdateTicks;
    unsigned int _currentPacketRecvUpdateTicks;
    NSObject<OS_dispatch_source> *_periodicHistoryUpdateSentTimer;
    NSObject<OS_dispatch_source> *_periodicHistoryUpdateRecvTimer;
    id /* block */ _copyPacketCountCallbackSend;
    id /* block */ _copyPacketCountCallbackRecv;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _historyStateRWlock;
}

- (void)dealloc;
- (id)init;
- (void)deallocCopyPacketCountCallBack:(BOOL)a0;
- (void)addConnectionBasedTopPacketCountsTelemetry:(id)a0 reportingKey:(id)a1 mapLinkIDToLinkUUID:(id)a2 isOutgoing:(BOOL)a3;
- (void)addConnectionBasedTopPacketCountsTelemetry:(id)a0 reportingKey:(id)a1 reportingTickCounts:(unsigned int)a2 mapLinkIDToLinkUUID:(id)a3 packetCountsPerConnection:(id)a4;
- (id)connectionBasedTopPacketCountsWithUpdateTickCounts:(unsigned int *)a0 isOutgoing:(BOOL)a1;
- (void)copyCopyPacketCountCallbackForOutgoing:(BOOL)a0 withCallback:(id /* block */)a1;
- (void)startPeriodicUpdateHistory:(BOOL)a0 withCopyPacketCountCallback:(id /* block */)a1;
- (void)startUpdateHistoryTimerForOutgoing:(BOOL)a0;
- (void)stopPeriodicHistoryUpdate;
- (void)updateHistory:(BOOL)a0;

@end
