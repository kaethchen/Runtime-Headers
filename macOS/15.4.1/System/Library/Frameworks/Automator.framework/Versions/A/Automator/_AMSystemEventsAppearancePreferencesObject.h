@interface _AMSystemEventsAppearancePreferencesObject : SBObject <_AMSystemEventsGenericMethods>

@property int appearance;
@property BOOL fontSmoothing;
@property int fontSmoothingStyle;
@property (copy) id highlightColor;
@property long long recentApplicationsLimit;
@property long long recentDocumentsLimit;
@property long long recentServersLimit;
@property int scrollBarAction;
@property BOOL smoothScrolling;
@property BOOL darkMode;

- (void)delete;
- (void)moveTo:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
