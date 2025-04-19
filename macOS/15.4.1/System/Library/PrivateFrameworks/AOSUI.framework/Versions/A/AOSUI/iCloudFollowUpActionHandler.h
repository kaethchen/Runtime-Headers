@class iCloudFollowUpSuggestion, FLFollowUpItem, iCloudHandleFLUI, FLFollowUpActionHandler, NSWindow;
@protocol iCloudFollowUpActionDelegate, FLViewModel;

@interface iCloudFollowUpActionHandler : NSObject {
    id<FLViewModel> _topViewModel;
}

@property (retain, nonatomic) FLFollowUpItem *item;
@property (retain) iCloudHandleFLUI *followupUIController;
@property (retain) iCloudFollowUpSuggestion *iCloudFollowUpSuggestionController;
@property (retain, nonatomic) NSWindow *parentWindow;
@property (retain) FLFollowUpActionHandler *handler;
@property (weak, nonatomic) id<iCloudFollowUpActionDelegate> actionDelegate;

+ (id)handlerWithItem:(id)a0;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0;
- (void)startSpinner;
- (void)stopSpinner;
- (BOOL)_isValidAction:(id)a0;
- (id)_deSerializedlaunchActionArguments:(id)a0;
- (void)_deleteFollowup:(id /* block */)a0;
- (void)_handleAction:(id)a0 completion:(id /* block */)a1;
- (void)_handleItemActivateWithCompletion:(id /* block */)a0;
- (void)_showiCloudSuggestionSheetWithCompletion:(id /* block */)a0;
- (id)_topViewModel;
- (void)handleActivationWithWindow:(id)a0 completion:(id /* block */)a1;
- (void)handleFollowUpItem:(id)a0 andAction:(id)a1 completion:(id /* block */)a2;

@end
