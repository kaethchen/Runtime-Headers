@interface SCRCalendarApplication : SCRApplication

- (id)_destinationElementForContentChooserElements:(id)a0 fromElement:(id)a1 direction:(long long)a2;
- (id)_guideItemsForEventUIElements:(id)a0 guide:(id)a1;
- (void)createContentChooserGuideItemsForGuide:(id)a0 guideInfo:(id)a1;
- (BOOL)handleRotorContentChooserMoveInDirection:(long long)a0 request:(id)a1;
- (BOOL)isCalendarApplication;
- (BOOL)supportsContentChooser;

@end
