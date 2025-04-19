@class RPFileTransferSession, NSString, NSData, NSURL;

@interface NWRPFileTransferSession : NSObject

@property (readonly, nonatomic) BOOL isTarget;
@property (readonly, nonatomic) RPFileTransferSession *session;
@property (copy, nonatomic) id /* block */ receivedFileHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSData *peerPublicKey;
@property (readonly, copy, nonatomic) NSData *selfPublicKey;
@property (copy, nonatomic) NSString *targetID;
@property (copy, nonatomic) NSURL *temporaryDirectoryURL;

- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)prepare;
- (void)handleProgress:(id)a0;
- (void)handleReceivedItem:(id)a0;
- (id)initAsTarget:(BOOL)a0;
- (void)transferFileURL:(id)a0 completion:(id /* block */)a1;

@end
