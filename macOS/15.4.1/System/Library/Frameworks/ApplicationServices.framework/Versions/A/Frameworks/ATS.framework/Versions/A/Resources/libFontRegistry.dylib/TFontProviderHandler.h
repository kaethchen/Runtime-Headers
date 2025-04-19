@class NSXPCConnection, NSDictionary, TFontProviderClientXPC;

@interface TFontProviderHandler : NSObject <XTFontProviderProtocol> {
    int fPID;
}

@property (weak, nonatomic) TFontProviderClientXPC *fProvider;
@property (retain, nonatomic) NSXPCConnection *fConnection;
@property (retain, nonatomic) NSDictionary *fRequest;
@property (copy, nonatomic) id /* block */ fReply;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0 andConnection:(id)a1;
- (void)XTCopyFontsForRequest:(id)a0 reply:(id /* block */)a1;
- (void)callFontProvider:(id /* block */)a0;

@end
