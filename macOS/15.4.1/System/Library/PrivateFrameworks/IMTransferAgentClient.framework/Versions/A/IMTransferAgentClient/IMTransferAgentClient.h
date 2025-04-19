@interface IMTransferAgentClient : NSObject

+ (id)sharedInstance;

- (void)downloadRCSTransferOnSimID:(id)a0 transferURL:(id)a1 destURL:(id)a2 completion:(id /* block */)a3;
- (void)_downloadRCSTransferOnSimID:(id)a0 transferURL:(id)a1 destURL:(id)a2 retries:(long long)a3 completion:(id /* block */)a4;
- (void)_uploadRCSFileOnSimID:(id)a0 fileURL:(id)a1 thumbURL:(id)a2 isAudioMessage:(BOOL)a3 userInfo:(id)a4 retries:(unsigned long long)a5 completion:(id /* block */)a6;
- (void)uploadRCSFileOnSimID:(id)a0 fileURL:(id)a1 thumbURL:(id)a2 isAudioMessage:(BOOL)a3 userInfo:(id)a4 completion:(id /* block */)a5;

@end
