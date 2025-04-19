@interface AVAudioApplicationCallbackDispatcher : NSObject <AudioApplicationXPCServerCallbackProtocol>

- (void)pingClient:(unsigned int)a0;
- (void)requestInputMute:(BOOL)a0 clientID:(unsigned int)a1 reply:(id /* block */)a2;

@end
