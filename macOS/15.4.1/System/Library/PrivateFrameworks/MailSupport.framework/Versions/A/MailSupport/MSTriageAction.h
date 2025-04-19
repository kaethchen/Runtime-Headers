@class EMQuery, NSString, EMMessageRepository, EFFuture, MSMessageListItemSelection;
@protocol MSTriageActionDelegate;

@interface MSTriageAction : NSObject <MSChangeActionable>

@property (nonatomic) long long origin;
@property (nonatomic) long long actor;
@property (readonly, nonatomic) MSMessageListItemSelection *messageListItemSelection;
@property (nonatomic) EMQuery *query;
@property (readonly, nonatomic) BOOL isUndoSupported;
@property (readonly, weak, nonatomic) id<MSTriageActionDelegate> delegate;
@property (readonly, nonatomic) EMMessageRepository *messageRepository;
@property (readonly, nonatomic) EFFuture *changeActionFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)_performAction:(id)a0 actionName:(id)a1;
+ (void)_performAction:(id)a0 undoManager:(id)a1 actionName:(id)a2;

- (void).cxx_destruct;
- (id)initWithOrigin:(long long)a0 actor:(long long)a1;
- (id)_changeAction;
- (id)initWithMessageListSelection:(id)a0 origin:(long long)a1 actor:(long long)a2 delegate:(id)a3;
- (id)initWithQuery:(id)a0 origin:(long long)a1 actor:(long long)a2 delegate:(id)a3;
- (void)performWithUndoManager:(id)a0 actionName:(id)a1 completion:(id /* block */)a2;

@end
