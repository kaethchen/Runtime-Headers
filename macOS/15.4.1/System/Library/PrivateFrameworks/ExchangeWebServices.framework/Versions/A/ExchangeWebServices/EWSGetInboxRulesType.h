@class NSString;

@interface EWSGetInboxRulesType : EWSBaseRequestType

@property (retain, nonatomic) NSString *MailboxSmtpAddress;

+ (id)definition;

- (void).cxx_destruct;

@end
