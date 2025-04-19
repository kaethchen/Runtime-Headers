@class NSString, GKVoiceChatSessionInternal, NSMutableDictionary, NSObject, NSMutableArray;
@protocol GKVoiceChatReliableChannel, OS_dispatch_queue, GKVoiceChatPeerInfoProvider;

@interface VoiceChatSessionRoster : NSObject {
    id<GKVoiceChatPeerInfoProvider, GKVoiceChatReliableChannel> _gameStateSession;
    NSString *_peerID;
    GKVoiceChatSessionInternal *_gkvs;
    NSObject<OS_dispatch_queue> *_sendQueue;
    NSMutableArray *_connectedPeers;
    NSMutableDictionary *_peerStateTable;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } resMutex;
    BOOL _needsUpdateBeaconList;
    BOOL _waitingToCalculateFocus;
    unsigned int _deviceRating;
    unsigned int _focusRating;
    unsigned int _chosenFocusRating;
    unsigned int _focusID;
    BOOL _isBeaconUp;
    BOOL _hasFocus;
}

@property (readonly, nonatomic) id<GKVoiceChatPeerInfoProvider, GKVoiceChatReliableChannel> gameStateSession;

- (void)dealloc;
- (void)cleanup;
- (BOOL)hasFocus;
- (id)subscribedPeers;
- (void)calculateFocus:(id)a0;
- (unsigned int)focusID;
- (void)configureDeviceRating;
- (id)initWithGameStateSession:(id)a0 peerID:(id)a1 voiceChatSession:(id)a2 sendQueue:(id)a3;
- (void)peer:(id)a0 didChangeState:(unsigned int)a1;
- (void)processSubscribeBeacon:(struct tagVoiceChatBeacon { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *)a0 beaconState:(id)a1 fromPeer:(id)a2;
- (void)processUnsubscribeBeacon:(struct tagVoiceChatBeacon { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *)a0 beaconState:(id)a1 fromPeer:(id)a2;
- (BOOL)recalculateFocusRating;
- (void)receivedBeacon:(id)a0 fromPeer:(id)a1;
- (void)sendBeacon:(struct tagVoiceChatBeacon { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *)a0 ToPeer:(id)a1;
- (void)sendBeacons;
- (void)startBeacon;
- (void)startBeaconWrapper:(id)a0;
- (void)stopBeacon;
- (void)updateBeacon;

@end
