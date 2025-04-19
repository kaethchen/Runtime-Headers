@class AMSUICommonBarButtonItem, NSArray, NSString, AMSUICommonTextView, AMSUICommonViewController;

@interface AMSUICommonNavigationItem : NSObject

@property unsigned long long backgroundStyle;
@property (weak) AMSUICommonViewController *delegateViewController;
@property (retain) AMSUICommonBarButtonItem *backBarButtonItem;
@property BOOL hidesBackButton;
@property unsigned long long largeTitleDisplayMode;
@property (retain) NSArray *leftBarButtonItems;
@property (retain) NSArray *rightBarButtonItems;
@property (retain) NSString *title;
@property (retain) AMSUICommonTextView *titleView;

- (void).cxx_destruct;
- (void)_update;
- (void)ams_configureWithDefaultBackground;
- (void)ams_configureWithTranslucentWhileScrollingBackground;
- (void)ams_configureWithTransparentBackground;

@end
