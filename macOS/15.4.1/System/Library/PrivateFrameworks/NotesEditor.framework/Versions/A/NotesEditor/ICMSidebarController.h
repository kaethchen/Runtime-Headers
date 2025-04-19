@interface ICMSidebarController : NSObject {
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ contentViewFrameObservation;
    void /* unknown type, empty encoding */ containerViewFrameObservation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentClickGestureRecognizer;
    void /* unknown type, empty encoding */ didClickContent;
}

@property (nonatomic) void /* unknown type, empty encoding */ isSwipeGestureEnabled;
@property (nonatomic) void /* unknown type, empty encoding */ isSidebarHidden;
@property (nonatomic) void /* unknown type, empty encoding */ isSidebarExpanded;
@property (nonatomic, weak) void /* unknown type, empty encoding */ containerView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ sidebarView;
@property (nonatomic) void /* unknown type, empty encoding */ expandedSidebarWidth;
@property (nonatomic) void /* unknown type, empty encoding */ previewSidebarWidth;
@property (nonatomic) void /* unknown type, empty encoding */ isTrackingSwipeGesture;
@property (nonatomic) void /* unknown type, empty encoding */ currentSwipeGestureAmount;
@property (nonatomic, copy) id /* block */ didClickContent;

- (id)init;
- (void).cxx_destruct;
- (BOOL)handleScrollWheelEvent:(id)a0;
- (void)didClickContentWithSender:(id)a0;
- (void)setSidebarHidden:(BOOL)a0 animated:(BOOL)a1;

@end
