@interface SCRFaceTimeApplication : SCRApplication

- (void)_moveFocusedApplicationToNotificationCenter;
- (void)_queueMoveFocusedApplicationToNotificationCenterIfNeeded;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (BOOL)isFaceTimeApplication;
- (void)moveToElement:(id)a0;

@end
