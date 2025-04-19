@interface VideosUI.VideosUI : NSObject

+ (id)getTopViewControllerFromSelectedNavController:(id)a0;
+ (void)initializeGroupActivities;
+ (void)initializeJSContext:(id)a0;
+ (void)initializeUIFactory;
+ (void)initializeWelcomeScreenControllerPresenterIfNeeded;
+ (void)notifyAppearingViewControllerOfTabSelection:(id)a0;
+ (void)notifyAppearingViewControllerOfTabSwitch:(id)a0;
+ (id)visualAddressOf:(id)a0;

- (id)init;

@end
