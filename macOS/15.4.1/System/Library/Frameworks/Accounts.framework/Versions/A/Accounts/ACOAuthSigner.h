@class ACAccount, NSXPCConnection;
@protocol ACDOAuthSignerProtocol;

@interface ACOAuthSigner : NSObject {
    NSXPCConnection *_connection;
    ACAccount *_account;
    id<ACDOAuthSignerProtocol> _proxyShim;
}

@property BOOL shouldIncludeAppIdInRequest;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (id)signedURLRequestWithURLRequest:(id)a0 callingPID:(id)a1 timestamp:(id)a2;
- (id)initWithAccount:(id)a0 remoteEndpoint:(id)a1;
- (void)disconnectFromRemoteOAuthSigner;
- (id)signedURLRequestWithURLRequest:(id)a0;
- (void)_connectToRemoteOAuthSignerUsingEndpoint:(id)a0;
- (id)signedURLRequestWithURLRequest:(id)a0 applicationID:(id)a1 timestamp:(id)a2;

@end
