@class OKWidgetView;

@interface OKWidgetContainerView : OFNSView {
    OKWidgetView *_widgetView;
}

@property (nonatomic) OKWidgetView *widgetView;

- (void)dealloc;

@end
