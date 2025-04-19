@class NSView, NSThemeFrame, NSTitlebarAccessoryViewController;

@interface NSTitlebarViewController : NSViewController {
    BOOL _inFullScreen;
    double _revealAmount;
    NSView *_floatingTrailingWidget;
    NSTitlebarAccessoryViewController *_floatingTrailingWidgetSource;
}

@property NSThemeFrame *associatedThemeFrame;
@property BOOL inFullScreen;
@property double revealAmount;
@property (readonly) double floatingTrailingWidgetWidth;
@property (readonly) double spaceToLeaveForFloatingTrailingWidgetOnToolbar;

- (double)_percentageToLeaveForFloatingTrailingWidgetOn:(long long)a0;
- (double)_percentageToLeaveForFloatingTrailingWidgetOn:(long long)a0 withFloatIndex:(long long)a1;
- (double)_spaceToLeaveForFloatingTrailingWidgetOn:(long long)a0;
- (void)didChangeChildViewController:(id)a0;
- (void)insertChildViewController:(id)a0 atIndex:(long long)a1;
- (void)removeChildViewControllerAtIndex:(long long)a0;
- (double)spaceToLeaveForFloatingTrailingWidgetOnAccessory:(id)a0;

@end
