@class NSString, GKVoiceChatSession, GKConnection;
@protocol GKViceroyVoiceChatStateUpdateDelegate;

@interface GKViceroyVoiceChat : NSObject <GKVoiceChatSessionDelegate>

@property (retain, nonatomic) GKConnection *connection;
@property (retain, nonatomic) GKVoiceChatSession *voiceChatSession;
@property (weak, nonatomic) id<GKViceroyVoiceChatStateUpdateDelegate> stateUpdateDelegate;
@property (readonly, copy) NSString *name;
@property (getter=isActive) BOOL active;
@property float volume;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)gkVoiceChatSession:(id)a0 stateUpdate:(unsigned long long)a1 forPeer:(id)a2;
- (id)initWithName:(id)a0 connection:(id)a1 gkSession:(id)a2;
- (void)setMuted:(BOOL)a0 forPlayerID:(id)a1;

@end
