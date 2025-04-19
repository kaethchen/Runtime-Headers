@class WFContextualAction, NSSwitch, SearchUIBiomeStreamSubscriber;

@interface SearchUISwitchAccessoryViewController : SearchUIAccessoryViewController

@property (retain, nonatomic) NSSwitch *view;
@property BOOL isAwaitingUpdate;
@property BOOL expectedUpdateState;
@property (retain) SearchUIBiomeStreamSubscriber *subscriber;
@property (retain) WFContextualAction *action;
@property (nonatomic) BOOL isHiddenByEvent;
@property (copy) id /* block */ debounceBlock;

+ (BOOL)supportsRowModel:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)updateWithNotification:(id)a0;
- (id)setupView;
- (void)buttonPressed;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1;
- (void)debounceSetOn:(BOOL)a0 animated:(BOOL)a1;
- (void)updateForEvent:(id)a0 animated:(BOOL)a1;
- (void)updateWithRowModel:(id)a0;

@end
