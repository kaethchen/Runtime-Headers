@class NSTouchBar, NSString, NSArray, NSPopoverTouchBarItem, NSMutableDictionary, NSDictionary, CNUIUserActionListDataSource, NSStackView, CNContact, NSButton;
@protocol CNUIUserActionContext;

@interface CNUserActionTouchBar : NSObject <CNUIUserActionListConsumer, CNUIUserActionListConsumerDelegate, NSTouchBarProvider>

@property (retain) NSTouchBar *touchBar;
@property (retain) NSStackView *userActionStackView;
@property (retain) NSPopoverTouchBarItem *userActionPopoverTouchBarItem;
@property (retain) NSStackView *allActionsPopoverStackView;
@property (retain) id<CNUIUserActionContext> userActionContext;
@property (retain) CNUIUserActionListDataSource *userActionDataSource;
@property (retain) NSDictionary *buttonsByActionType;
@property (retain) NSMutableDictionary *modelsByActionType;
@property (retain) NSArray *tokens;
@property (retain) NSButton *actionTypeTextButton;
@property (nonatomic) unsigned long long displayStyle;
@property (nonatomic) unsigned long long titleOptions;
@property (copy, nonatomic) NSArray *actionTypes;
@property (retain, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)displayNameFromContact:(id)a0 style:(long long)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (id)dataSource;
- (void)updateTouchBar;
- (void)_rebuildTouchBar;
- (BOOL)_shouldUseShorterTitleForButton:(id)a0;
- (void)consumer:(id)a0 didSelectAction:(id)a1;
- (id)createHoldGestureRecognizer;
- (id)createUserActionPopoverTouchBarItem;
- (id)createUserActionStackView;
- (void)disableUserActionButtons;
- (void)executeUserActionButton:(id)a0 preferDefault:(BOOL)a1;
- (id)initWithUserActionListDataSource:(id)a0;
- (void)setABPerson:(id)a0;
- (void)touchBarButtonFrameChanged:(id)a0;
- (void)updateAllUserActionsViewWithModel:(id)a0;
- (id)updateTouchBarForActionType:(id)a0;
- (void)updateTouchBarTitle;
- (void)userActionDefaultButtonHeld:(id)a0;
- (void)userActionDefaultButtonSelected:(id)a0;
- (void)userActionPopoverButtonSelected:(id)a0;

@end
