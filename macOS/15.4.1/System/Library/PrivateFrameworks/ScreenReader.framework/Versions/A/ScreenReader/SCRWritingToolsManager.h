@class SCRWindow, SCRPopover, SCRElement;

@interface SCRWritingToolsManager : NSObject

@property (class, readonly) SCRWritingToolsManager *shared;

@property (retain, nonatomic) SCRElement *lastHostTextElement;
@property (nonatomic) long long currentState;
@property (retain, nonatomic) SCRWindow *affordanceWindow;
@property (retain, nonatomic) SCRPopover *popover;

- (void).cxx_destruct;
- (void)_poll;
- (id)_hostTextElement;
- (long long)_inferState;
- (void)addActionsToGuide:(id)a0 forElement:(id)a1;
- (BOOL)isVirtualFocusInPopover;
- (BOOL)moveToLinkedItemWithEvent:(id)a0 request:(id)a1 element:(id)a2;
- (void)openWritingTools;
- (BOOL)popoverVisible;

@end
