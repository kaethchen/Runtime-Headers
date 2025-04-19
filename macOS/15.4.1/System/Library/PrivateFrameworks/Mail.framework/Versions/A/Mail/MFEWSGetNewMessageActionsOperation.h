@protocol MFEWSGetNewMessageActionsOperationDelegate;

@interface MFEWSGetNewMessageActionsOperation : MFEWSPersistenceTaskOperation

@property (readonly, nonatomic) long long previousActionID;
@property (weak, nonatomic) id<MFEWSGetNewMessageActionsOperationDelegate> delegate;

- (void).cxx_destruct;
- (void)main;
- (id)initWithPreviousActionID:(long long)a0;

@end
