@class NSString, AVAudioSessionXPCServer;
@protocol AVAudioSessionServerDelegate;

@interface AVAudioSessionServerPriv : NSObject <AVAudioSessionServer> {
    AVAudioSessionXPCServer *_xpcServer;
    id<AVAudioSessionServerDelegate> _serverDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (int)activateWithFlags:(unsigned int)a0 auditToken:(const struct { unsigned int x0[8]; } *)a1 flags:(unsigned int)a2;
- (int)deactivateWithFlags:(unsigned int)a0 auditToken:(const struct { unsigned int x0[8]; } *)a1 flags:(unsigned int)a2;
- (id)initWithAudioControlQueue:(id)a0 delegate:(id)a1;
- (void)startXPCServer;

@end
