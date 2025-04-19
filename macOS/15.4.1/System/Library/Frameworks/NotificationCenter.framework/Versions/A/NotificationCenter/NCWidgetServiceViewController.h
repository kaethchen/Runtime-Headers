@class NCWidgetServiceSubsystem;

@interface NCWidgetServiceViewController : NCRemoteViewServiceViewController {
    BOOL _supportsEditing;
    double _topAndBottomMargin;
    long long _previousWidgetMode;
}

@property (readonly, nonatomic) NCWidgetServiceSubsystem *widgetService;
@property (nonatomic) BOOL hasContent;

- (void)cancelOperation:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)setPresentedViewController:(id)a0;
- (void)clientViewDidLoad;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })marginInsets;
- (id)readyContext;

@end
