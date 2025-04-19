@class CXChannelServiceDefinition, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface CXXPCChannelProvider : CXChannelProvider

@property (retain, nonatomic) BSServiceConnection *connection;
@property (readonly, nonatomic) CXChannelServiceDefinition *definition;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithConfiguration:(id)a0;
- (id)hostProtocolDelegate;
- (BOOL)requiresProxyingAVAudioSessionState;

@end
