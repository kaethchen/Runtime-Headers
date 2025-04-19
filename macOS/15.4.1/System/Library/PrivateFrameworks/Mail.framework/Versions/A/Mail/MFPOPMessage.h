@class MFMailbox, NSString, NSData, MFPOPAccount;

@interface MFPOPMessage : MCMessage

@property (nonatomic) unsigned long long messageNumber;
@property (copy, nonatomic) NSData *messageData;
@property (copy, nonatomic) NSString *messageID;
@property (readonly, nonatomic) MFPOPAccount *account;
@property (readonly, nonatomic) MFMailbox *mailbox;

- (void).cxx_destruct;
- (id)dataSource;
- (void)setDataSource:(id)a0;
- (unsigned long long)messageSize;
- (id)initWithPOP3FetchStore:(id)a0;
- (id)messageDataFetchIfNotAvailable:(BOOL)a0 newDocumentID:(id)a1;
- (id)remoteMailboxURLString;

@end
