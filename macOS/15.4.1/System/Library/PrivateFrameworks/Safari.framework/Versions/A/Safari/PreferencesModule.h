@class NSString, NSWindow;

@interface PreferencesModule : NSPreferencesModule

@property (nonatomic) double preferredMinWidth;
@property (readonly, nonatomic) NSString *safariHelpAnchor;
@property (readonly, nonatomic) NSWindow *preferencesWindowIfMain;

- (void)willBeDisplayed;
- (id)imageForPreferenceNamed:(id)a0;
- (BOOL)isResizable;
- (void)moduleWasInstalled;
- (void)_layoutSubtreeIfNeededAndResizeWindowWithContainer:(id)a0 originalContainerHeight:(double)a1;
- (void)addSubviewsUsingAutoLayout:(id)a0 toView:(id)a1 withConstraints:(id)a2;
- (void)addSubviewsUsingAutoLayout:(id)a0 toView:(id)a1 withConstraints:(id)a2 resizeContainer:(BOOL)a3;
- (void)openHelpPage:(id)a0;
- (void)removeRowUsingAutoLayout:(long long)a0 fromMatrix:(id)a1;
- (void)removeViewsUsingAutoLayout:(id)a0;
- (void)removeViewsUsingAutoLayout:(id)a0 resizeContainer:(BOOL)a1;
- (void)resizeWindowUsingAutoLayout;
- (BOOL)snapshotsOfPreferencesWindowArePermitted;

@end
