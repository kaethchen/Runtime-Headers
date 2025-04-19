@interface SCRNotificationCenterWindow : SCRWindow <SCRApplicationDirectChildProtocol>

- (BOOL)_isNotificationBannerOrAlert;
- (id)_orderedElementsToDescribe;
- (void)addItemDescriptionForBrailleToRequest:(id)a0;
- (void)addItemNameDescriptionToRequest:(id)a0;
- (BOOL)allowAlternateSpeechToTitle;
- (id)notificationElements;
- (void)setKeyboardChild:(id)a0 force:(BOOL)a1;
- (BOOL)shouldAnnounceArrival;
- (BOOL)showInGuide;
- (id)titleDescription;

@end
