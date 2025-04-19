@interface INSendMessageIntentDonationMetadata : INIntentDonationMetadata

@property (getter=isBusinessChat) BOOL businessChat;
@property BOOL mentionsCurrentUser;
@property (getter=isReplyToCurrentUser) BOOL replyToCurrentUser;
@property BOOL notifyRecipientAnyway;
@property unsigned long long recipientCount;

+ (BOOL)supportsSecureCoding;
+ (Class)_intentClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;

@end
