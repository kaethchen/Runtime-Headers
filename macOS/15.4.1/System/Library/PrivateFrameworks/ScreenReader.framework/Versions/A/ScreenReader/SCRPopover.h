@interface SCRPopover : SCRMapElement <SCRApplicationDirectChildProtocol>

- (void)dealloc;
- (id)roleDescription;
- (void)_layoutDidChange:(id)a0;
- (id)_shortDescriptionForElement:(id)a0;
- (void)addItemDescriptionForFallbackToRequest:(id)a0;
- (long long)groupBehavior;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (id)nameForGuide;
- (id)originatedFromElement;
- (void)setFocusedChild:(id)a0;
- (void)setKeyboardChild:(id)a0 force:(BOOL)a1;
- (BOOL)shouldTrackKeyboardOnFocusInto;
- (BOOL)showInGuide;

@end
