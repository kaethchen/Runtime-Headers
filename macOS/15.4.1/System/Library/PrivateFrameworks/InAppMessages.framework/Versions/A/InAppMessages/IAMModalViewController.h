@class NSView, NSString, NSViewController;
@protocol IAMViewControllerMetricsDelegate;

@interface IAMModalViewController : NSViewController <NSWindowDelegate>

@property (retain, nonatomic) NSView *contentView;
@property (retain, nonatomic) NSViewController *contentViewController;
@property (weak, nonatomic) id<IAMViewControllerMetricsDelegate> metricsDelegate;
@property (copy, nonatomic) id /* block */ viewControllerWillDismissBlock;
@property (nonatomic) BOOL shouldPresentFullscreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
