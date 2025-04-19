@class NSView;
@protocol NSSplitViewItemAccessoryView;

@interface _UXSourceSplitItemView : _UXContainerView <NSSplitViewItemSeparatorTrackingAdapter>

@property (nonatomic) BOOL isRegisteredWithTitlebar;
@property (nonatomic) double dividerPosition;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } splitFrame;
@property (readonly) long long titlebarSeparatorStyle;
@property (readonly) BOOL isSidebar;
@property (readonly) BOOL isTrailingSidebar;
@property (readonly) NSView<NSSplitViewItemAccessoryView> *accessoryView;


@end
