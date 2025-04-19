@interface IMRCSTransferController : NSObject

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)receiveTransferOnSimID:(id)a0 transferURL:(id)a1 destURL:(id)a2 completion:(id /* block */)a3;
- (void)sendTransferOnSimID:(id)a0 fileURL:(id)a1 thumbURL:(id)a2 isAudioMessage:(BOOL)a3 userInfo:(id)a4 completion:(id /* block */)a5;

@end
