@class NSString, NSMutableURLRequest, NSFileHandle, NSURL;
@protocol ASTConnectionStatusDelegate;

@interface ASTConnectionAsset : ASTMaterializedConnection <ASTDownloadConnection> {
    NSURL *_serverURL;
    NSString *_endpoint;
}

@property (retain, nonatomic) NSString *assetName;
@property (copy, nonatomic) id /* block */ didDownloadFile;
@property (readonly, nonatomic) NSFileHandle *destinationFileHandle;
@property (copy, nonatomic) id /* block */ didReceiveResponse;
@property (readonly, nonatomic) NSMutableURLRequest *request;
@property (weak, nonatomic) id<ASTConnectionStatusDelegate> delegate;
@property (nonatomic) long long state;
@property (nonatomic) long long networkDisconnectedRetryCount;
@property (nonatomic) BOOL retryOnNetworkDisconnected;
@property (readonly, nonatomic) unsigned long long rootOfTrust;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)endpoint;
- (id)method;
- (id)serverURL;
- (id)accept;
- (id)initWithServerURL:(id)a0 endpoint:(id)a1 assetName:(id)a2 destinationFileHandle:(id)a3;

@end
