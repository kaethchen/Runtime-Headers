@class NSArray;

@interface EMMessageConversationFlagChangeAction : EMMessageChangeAction

@property (readonly, nonatomic) long long conversationNotificationLevel;
@property (copy, nonatomic) NSArray *conversationIDs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)signpostType;
- (id)initWithConversationIDs:(id)a0 origin:(long long)a1 actor:(long long)a2 conversationNotificationLevel:(long long)a3;

@end
