@class NSXPCConnection;

@interface AUMessageChannel_XPC : NSObject <AUMessageChannel> {
    NSXPCConnection *_xpcConnection;
}

@property (copy) id /* block */ callHostBlock;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithListenerEndpoint:(id)a0;
- (id)callAudioUnit:(id)a0;

@end
