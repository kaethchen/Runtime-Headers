@class SMConversation;

@interface SMConversationDeletedNotification : RTNotification

@property (readonly, nonatomic) SMConversation *conversation;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConversation:(id)a0;

@end
