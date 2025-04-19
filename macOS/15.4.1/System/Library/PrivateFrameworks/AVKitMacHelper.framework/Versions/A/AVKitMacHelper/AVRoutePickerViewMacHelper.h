@class AVRoutePickerViewRemoteViewService, NSString, AVRoutePickerRemoteViewController, AVOutputContext;

@interface AVRoutePickerViewMacHelper : NSObject <AVRoutePickerViewMacHelper, AVRoutePickerViewRemoteViewControllerDelegate, NSPopoverDelegate> {
    AVRoutePickerRemoteViewController *_routesRemoteViewController;
    AVOutputContext *_outputContext;
}

@property (retain, nonatomic) AVRoutePickerViewRemoteViewService *routePickerViewRemoteViewService;
@property (nonatomic) long long routingMethod;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedRoutePickerViewRectInWindow;
@property (copy, nonatomic) id /* block */ dismissalHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)a0;
- (void)popoverWillShow:(id)a0;
- (void)routePickerRemoteViewController:(id)a0 viewBridgeConnectionDidFailWithError:(id)a1;
- (void)showOrHideRoutePickerPopoverFromSourceUIWindow:(id)a0 pickingOnOutputContext:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_popoverSourceRectFromNormalizedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inWindow:(id)a1;
- (void)setUpRoutePickerViewRemoteViewServiceIfNeeded;

@end
