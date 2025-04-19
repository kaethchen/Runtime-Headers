@class NSMutableSet, IMDServiceSession;

@interface IMDServiceAttachmentController : NSObject

@property (retain, nonatomic) NSMutableSet *pendingRemoteFileRequests;
@property (readonly, weak, nonatomic) IMDServiceSession *session;

- (void).cxx_destruct;
- (id)initWithSession:(id)a0;
- (BOOL)_receiveFileTransfer:(id)a0 transferID:(id)a1 balloonBundleID:(id)a2 senderContext:(id)a3 progressBlock:(id /* block */)a4 completionBlock:(id /* block */)a5;
- (void)_sendAttachmentToPeerDevice:(unsigned long long)a0 fileTransferGUID:(id)a1 messageGuid:(id)a2 fileURL:(id)a3 useLocalPeersFileAPI:(BOOL)a4 error:(long long)a5;
- (BOOL)acceptFileTransfer:(id)a0;
- (BOOL)hasLocalDevice;
- (id)localDeviceProductVersion;
- (void)remoteFileResponse:(id)a0;
- (void)remotefileRequest:(id)a0 attempts:(long long)a1 shouldRetry:(BOOL)a2;
- (void)retrieveLocalFileTransfer:(id)a0 attachmentIndex:(unsigned long long)a1 path:(id)a2 requestURLString:(id)a3 ownerID:(id)a4 signature:(id)a5 decryptionKey:(id)a6 requestedSize:(id)a7 fileSize:(unsigned long long)a8 progressBlock:(id /* block */)a9 completionBlock:(id /* block */)a10;
- (BOOL)sendToLocalPeers:(id)a0;
- (BOOL)sendToLocalPeersFile:(id)a0 dictionary:(id)a1;

@end
