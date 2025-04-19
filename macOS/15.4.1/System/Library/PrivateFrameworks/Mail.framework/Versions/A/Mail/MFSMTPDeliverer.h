@class MFSMTPAccount;

@interface MFSMTPDeliverer : MFMessageDeliverer

@property (retain, nonatomic) MFSMTPAccount *account;

+ (id)log;

- (long long)deliverMessageHeaderData:(id)a0 bodyData:(id)a1 toRecipients:(id)a2;

@end
