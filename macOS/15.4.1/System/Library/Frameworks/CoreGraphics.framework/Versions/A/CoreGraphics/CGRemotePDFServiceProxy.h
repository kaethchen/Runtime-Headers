@class NSXPCConnection;
@protocol CGRemotePDFServiceProtocol, NSXPCProxyCreating;

@interface CGRemotePDFServiceProxy : NSObject {
    NSXPCConnection *_connection;
    id<CGRemotePDFServiceProtocol, NSXPCProxyCreating> _proxy;
}

+ (id)sharedInstance;
+ (id)interface;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLoopbackListener:(id)a0 error:(id *)a1;
- (id)initWithCGPDFServiceConnection:(id *)a0;
- (id)initWithConnection:(id)a0 error:(id *)a1;
- (void)newRemotePDFDocumentProxyWithData:(id)a0 withReply:(id /* block */)a1;
- (void)newRemotePDFDocumentWithData:(id)a0 completion:(id /* block */)a1;
- (id)newRemotePDFDocumentWithData:(id)a0 error:(id *)a1;

@end
