@interface SNNetworkAnalyticsInternal : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ netId;
    void /* unknown type, empty encoding */ networkConnectionId;
    void /* unknown type, empty encoding */ connectionProvider;
    void /* unknown type, empty encoding */ orchestratorRequestId;
    void /* unknown type, empty encoding */ netIdForRequestLink;
    void /* unknown type, empty encoding */ isConnectionActive;
    void /* unknown type, empty encoding */ netIdAvailable;
    void /* unknown type, empty encoding */ sequenceNumber;
    void /* unknown type, empty encoding */ httpHeaderEvent;
    void /* unknown type, empty encoding */ preparationSnapshotEvent;
    void /* unknown type, empty encoding */ debugPreparationSnapshotEvent;
    void /* unknown type, empty encoding */ readySnapshotEvent;
    void /* unknown type, empty encoding */ debugReadySnapshotEvent;
    void /* unknown type, empty encoding */ sessionConnectionSnapthotEvent;
    void /* unknown type, empty encoding */ debugSessionConnectionSnapthotEvent;
    void /* unknown type, empty encoding */ sessionConnectionFailedEvent;
    void /* unknown type, empty encoding */ peerConnectionFailedEvent;
    void /* unknown type, empty encoding */ siriAnalyticsMessageStream;
}

@property (class, nonatomic, readonly) SNNetworkAnalyticsInternal *sharedNetworkAnalytics;

+ (int)netConnectionModeFrom:(id)a0;
+ (id)netEndpointFromDictionary:(id)a0;
+ (int)netEndpointTypeFrom:(unsigned int)a0;
+ (id)netSessionConnectionFailedWithError:(id)a0 connectionMode:(id)a1 sessionType:(id)a2 sessionState:(id)a3 isDormant:(BOOL)a4 snConnectionAnalysisInfo:(id)a5;
+ (int)netSessionStateFrom:(id)a0;
+ (int)netSessionTypeFrom:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)setConnectionProvider:(id)a0;
- (void)setNetId:(id)a0;
- (void)setNetworkConnectionId:(id)a0;
- (BOOL)emitLogDebug;
- (unsigned int)getSequenceNumber;
- (void)increaseSequenceNumber;
- (BOOL)isNetIdAvailable;
- (void)logDebugNetworkConnectionStatePreparationSnapshotCaptured:(id)a0;
- (void)logDebugNetworkConnectionStateReadySnapshotCaptured:(id)a0;
- (void)logDebugSessionConnectionSnapshotCaptured:(id)a0;
- (void)logNetworkConnectionStatePreparationSnapshotCaptured:(id)a0;
- (void)logNetworkConnectionStateReadySnapshotCaptured:(id)a0;
- (void)logPeerConnectionFailed:(id)a0;
- (void)logRequestLinkBetweenOrchestratorAndNetworkComponent;
- (void)logSessionConnectionFailed:(id)a0;
- (void)logSessionConnectionHttpHeaderCreated:(id)a0;
- (void)logSessionConnectionSnapshotCaptured:(id)a0;
- (void)resetNetId;
- (void)resetSequenceNumber;
- (void)setIsConnectionActive:(BOOL)a0;
- (void)setNetIdAvailable:(BOOL)a0;
- (BOOL)getIsConnectionActive;
- (id)getNetId;
- (id)getOrchestratorRequestId;
- (void)setOrchestatorRequestId:(id)a0;

@end
