@class NSString, NSDateComponents, EWSSingleRecipientType;

@interface EWSPostItemType : EWSItemType

@property (copy, nonatomic) NSString *ConversationTopic;
@property (retain, nonatomic) EWSSingleRecipientType *From;
@property (copy, nonatomic) NSString *InternetMessageId;
@property (nonatomic) BOOL IsRead;
@property (retain, nonatomic) NSDateComponents *PostedTime;
@property (copy, nonatomic) NSString *References;
@property (retain, nonatomic) EWSSingleRecipientType *Sender;

+ (id)definition;

- (void).cxx_destruct;

@end
