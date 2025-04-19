@class NSMutableSet;

@interface ICMWindow : NSWindow

@property (readonly, nonatomic) NSMutableSet *activeCorrectionPanels;
@property (readonly, nonatomic) BOOL hasActiveCorrectionPanel;
@property (nonatomic) BOOL disableFirstResponderChanges;

- (void).cxx_destruct;
- (id)accessibilityFocusedUIElement;
- (void)addChildWindow:(id)a0 ordered:(long long)a1;
- (BOOL)makeFirstResponder:(id)a0;
- (void)removeChildWindow:(id)a0;

@end
