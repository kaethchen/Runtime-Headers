@class PXScrollInfo, NSString, NSObject;
@protocol OS_dispatch_queue, PXScrollControllerUpdateDelegate;

@interface PXGAsyncScrollController : NSObject <PXScrollController> {
    BOOL _delegateRespondsToDidScroll;
    BOOL _needsUpdate;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct CGSize { double width; double height; } referenceSize;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) id<PXScrollControllerUpdateDelegate> updateDelegate;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } activeRect;
@property (nonatomic) struct CGPoint { double x0; double x1; } visibleOrigin;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } constrainedVisibleRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } targetRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentBounds;
@property (copy, nonatomic) PXScrollInfo *scrollInfo;
@property (nonatomic) BOOL respectsContentZOrder;
@property (nonatomic) struct CGSize { double width; double height; } presentedContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;
- (void)didScroll;

@end
