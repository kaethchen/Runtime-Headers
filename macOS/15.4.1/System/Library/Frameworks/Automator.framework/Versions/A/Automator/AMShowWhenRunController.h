@class NSArray, AMActionView, NSButton, AMAction;

@interface AMShowWhenRunController : NSViewController

@property (weak, nonatomic) NSButton *_showWhenRunButton;
@property (copy, nonatomic) NSArray *showWhenRunItems;
@property (weak, nonatomic) AMAction *action;
@property (weak, nonatomic) AMActionView *actionView;
@property (readonly, copy, nonatomic) NSArray *selectedShowWhenRunItemNames;

- (void).cxx_destruct;
- (void)createShowWhenRunItems;
- (void)didToggleIgnoreInput:(id)a0;
- (void)showActionWhenRun:(id)a0;
- (void)showSelectedItemsWhenRun:(id)a0;

@end
