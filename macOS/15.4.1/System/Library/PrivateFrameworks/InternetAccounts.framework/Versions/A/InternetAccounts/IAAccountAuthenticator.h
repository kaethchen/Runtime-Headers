@class NSURLCredential, NSData, NSError, NSString, IADataPlugin, NSURLRequest, IAMailAccountSetupInput, NSMutableData, NSHTTPURLResponse, NSURLConnection;

@interface IAAccountAuthenticator : NSObject <NSURLConnectionDelegate, IADataPluginDelegate> {
    id /* block */ _authCompletionBlock;
    NSURLConnection *_loginConnection;
    NSMutableData *_incomingData;
    IAMailAccountSetupInput *_input;
    IADataPlugin *_mailPlugin;
    IAAccountAuthenticator *_strongSelf;
}

@property (retain) NSURLCredential *credential;
@property long long authType;
@property (retain) NSError *error;
@property BOOL result;
@property (retain) NSURLRequest *urlRequest;
@property (readonly) NSData *urlResponseData;
@property (readonly) NSHTTPURLResponse *urlResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)authType;
+ (id)errorForHTTPStatus:(long long)a0;
+ (id)parseGoogleResponse:(id)a0;

- (void).cxx_destruct;
- (void)cleanup;
- (void)cancel;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)connectionDidFinishLoading:(id)a0;
- (id)accountProperties;
- (void)authSuccess;
- (void)authFailure:(id)a0;
- (void)authenticateWithCompletionBlock:(id /* block */)a0;
- (void)plugin:(id)a0 accountSetupDidFail:(id)a1 withError:(id)a2;
- (void)plugin:(id)a0 accountSetupDidFinish:(id)a1 withResult:(id)a2;
- (void)plugin:(id)a0 accountSetupUpdate:(id)a1 withStatus:(long long)a2;
- (void)plugin:(id)a0 didChangeAccountUID:(id)a1;
- (void)plugin:(id)a0 didCreateAccountUID:(id)a1;
- (void)plugin:(id)a0 didDeleteAccountUID:(id)a1;
- (BOOL)plugin:(id)a0 handleCertificateError:(id)a1;

@end
