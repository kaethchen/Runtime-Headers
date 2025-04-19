@interface SwiftUI.ListCoreScrollView : SwiftUI.AppKitScrollView {
    void /* unknown type, empty encoding */ hasRegisteredForTableViewSizeChangeNotifications;
}

@property (class, nonatomic, readonly) BOOL compatibleWithResponsiveScrolling;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tableViewFrameDidChange;

@end
