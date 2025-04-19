@interface SCRSystemPreferencesScrollArea : SCRScrollArea {
    unsigned char _cachedIsSidebarContentScrollArea;
    unsigned char _cachedIsCompletelyTransparent;
}

- (id)typeDescription;
- (id)title;
- (BOOL)_isCompletelyTransparent;
- (BOOL)_isSidebarContentScrollArea;
- (id)descriptionForContextualHelp;
- (id)drillOutInstruction;
- (BOOL)groupBehaviorIsAutoDrill;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)shouldAutoFocusOnChildren;

@end
