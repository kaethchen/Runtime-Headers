@class NSString, NSObject;

@interface _NSOSPSidebarTrackingAdapter : NSObject <NSSidebarTrackingAdapter>

@property double sidebarDividerPosition;
@property long long depthOfView;
@property (readonly) NSObject *representedView;
@property (readonly) double dividerWidth;
@property (readonly) double logicalDividerPosition;
@property (readonly) BOOL isValidConfiguration;
@property (readonly) double minimumDividerPosition;
@property (readonly) double maximumDividerPosition;
@property (readonly) BOOL isCollapsed;
@property (readonly, getter=isOverlaidAsSidebar) BOOL overlaidAsSidebar;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } dividerCursorRect;
@property struct NSEdgeInsets { double x0; double x1; double x2; double x3; } sidebarAdditionalSafeAreaInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
