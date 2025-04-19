@class EMMessageRepository;

@interface MSRestoreModelCategoryForAllMessagesTriageAction : MSTriageAction

@property (retain, nonatomic) EMMessageRepository *messageRepository;

- (void).cxx_destruct;
- (id)_changeAction;
- (id)initWithMessageRepository:(id)a0 origin:(long long)a1 actor:(long long)a2;

@end
