@class NSArray, MFPOPAccount, NSMutableDictionary;

@interface MFPOPSizeEngine : MFSizeEngine {
    NSMutableDictionary *_infoByMessageID;
}

@property (readonly, copy) NSArray *allMessageIDs;
@property (readonly, nonatomic) MFPOPAccount *account;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)_deleteServerMessagesCompleted:(id)a0;
- (void)_fetchCompleted:(id)a0;
- (void)_messageFlagsChanged:(id)a0;
- (id)_newMessageInfoFromMessageHeaders:(id)a0;
- (BOOL)_prepareToRefresh;
- (id)_remoteMailboxURL;
- (void)_runWorkerThread;
- (id)infoWithKey:(id)a0 forMessageWithID:(id)a1;

@end
