@class NSArray, NSString, MCMessageBody, NSDate, MFRecoveredMessage;

@interface MSEmailModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MFRecoveredMessage *recoveredMessage;
@property (retain, nonatomic) MCMessageBody *messageBody;
@property (copy, nonatomic) NSArray *toRecipients;
@property (copy, nonatomic) NSArray *ccRecipients;
@property (copy, nonatomic) NSArray *bccRecipients;
@property (copy, nonatomic) NSString *fromAddress;
@property (readonly, nonatomic) BOOL senderIsVIP;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) NSArray *replyToAddresses;
@property (copy, nonatomic) NSArray *references;
@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *inReplyTo;
@property (copy, nonatomic) NSArray *htmlStringsAndAttachments;
@property (copy, nonatomic) NSString *snippet;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)searchableItem;
- (void)_addReplyAllRecipientsToMessage:(id)a0 fromAddressList:(id)a1;
- (id)_htmlForAttributedString:(id)a0;
- (void)generateForwardedMessageWithString:(id)a0 completionHandler:(id /* block */)a1;
- (void)generateReplyMessageWithString:(id)a0 replyAll:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)generateRequestedMessageWithString:(id)a0 messageType:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
