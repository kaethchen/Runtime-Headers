@class NSString, NSDate, IMDAccount;

@interface IMDChatMemberStatusChangeContext : NSObject

@property (nonatomic) int status;
@property (retain, nonatomic) NSString *handleID;
@property (retain, nonatomic) NSString *fromHandleID;
@property (retain, nonatomic) NSString *unformattedNumber;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *chatIdentifier;
@property (nonatomic) unsigned char style;
@property (retain, nonatomic) IMDAccount *account;
@property (retain, nonatomic) NSString *destinationCallerID;
@property (retain, nonatomic) NSDate *messageTime;
@property (retain, nonatomic) NSString *messageID;
@property (nonatomic) BOOL silently;
@property (nonatomic) BOOL unattributed;

- (void).cxx_destruct;

@end
