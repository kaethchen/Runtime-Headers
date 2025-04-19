@class _UNMachSendRight;
@protocol _UNNotificationContentExtensionVendorSizingViewDelegate;

@interface _UNNotificationContentExtensionVendorSizingView : NSView {
    BOOL _inSetFrame;
    _UNMachSendRight *_currentFence;
}

@property (weak, nonatomic) id<_UNNotificationContentExtensionVendorSizingViewDelegate> delegate;
@property (nonatomic) BOOL sendFrameChangesToHost;

- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
