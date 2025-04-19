@class NSString;

@interface SCRDockGroup : SCRGroup {
    NSString *_previousFocusedChildWindowType;
}

- (void).cxx_destruct;
- (void)_describeFocusedChild;
- (void)_resetToItemInDirection:(id)a0;
- (BOOL)outputVirtualNavigationWithEvent:(id)a0 commandString:(id)a1 request:(id)a2 keyboardSynched:(BOOL)a3 allowScrolling:(BOOL)a4;
- (void)setFocusedChild:(id)a0;
- (BOOL)shouldPromoteUIElement:(id)a0;

@end
