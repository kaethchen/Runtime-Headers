@class NSMutableDictionary, VCMediaKeyIndex, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface VCSecurityKeyManager : NSObject {
    id _delegate;
    id _reportingAgentWeak;
    NSMutableArray *_unknownKeyIndexList;
    BOOL _shortMKIForOneToOneEnabled;
    BOOL _shortMKIForGFTEnabled;
    NSMutableDictionary *_sendKeys;
    NSMutableDictionary *_receiveKeys;
    NSMutableDictionary *_prunePendingReceiveKeys;
    VCMediaKeyIndex *_latestSendKeyIndex;
    VCMediaKeyIndex *_latestReceiveKeyIndex;
    VCMediaKeyIndex *_keyIndexNotReceived;
    BOOL _isSendKeysCleanUpPending;
    BOOL _isReceiveKeysCleanUpPending;
    BOOL _forceRemoteMKMMissing;
    double _keyMaterialNotUsedTimeout;
    NSObject<OS_dispatch_queue> *_keyManagerQueue;
    double _lastKeyIndexNotReceived;
    NSObject<OS_dispatch_source> *_pruneTimer;
    NSObject<OS_dispatch_source> *_encryptionKeyRollTimer;
    BOOL _isRunning;
}

@property (nonatomic) struct opaqueRTCReporting { } *reportingAgent;

- (void)dealloc;
- (id)delegate;
- (void)start;
- (void)stop;
- (id)initWithDelegate:(id)a0 options:(const struct tagVCSecurityKeyManagerOptions { BOOL x0; BOOL x1; } *)a1;
- (id)logPrefix;
- (BOOL)associateMKI:(id)a0 withParticipantID:(unsigned long long)a1;
- (BOOL)addSecurityKeyMaterial:(id)a0;
- (BOOL)addSecurityKeyMaterial:(id)a0 securityKeyMode:(char)a1;
- (void)adjustMKILength:(id)a0 securityKeyMode:(char)a1;
- (id)copyMKMWithPrefix:(id)a0;
- (id)copyMKMWithPrefix:(id)a0 forParticipantID:(unsigned long long)a1;
- (void)detectInabilityToDecryptSymptom:(id)a0 prefix:(id)a1;
- (double)firstExpirationTime;
- (id)getLatestRecvKeyMaterial;
- (long long)getNotUsedTimeout;
- (id)getRecvKeyMaterialWithIndex:(id)a0;
- (id)getSendKeyMaterialWithIndex:(id)a0;
- (void)handlePruneTimerEventAndReschedule;
- (id)latestSendKeyMaterialWithSecurityKeyMode:(char)a0;
- (void)notifyEncryptionInfoChange:(id)a0 securityKeyMode:(char)a1;
- (double)pruneAllExpiredKeys;
- (void)pruneRecvKeyMaterialWithDelay:(double)a0;
- (void)pruneSendKeyMaterialWithDelay:(double)a0;
- (void)releaseTimers;
- (void)replaceMKIWithShortMKI:(id)a0;
- (void)scheduleEncryptionRollTimerWithDelay:(double)a0;
- (void)schedulePruneTimer:(double)a0;
- (BOOL)startTimers;
- (void)stopTimers;

@end
