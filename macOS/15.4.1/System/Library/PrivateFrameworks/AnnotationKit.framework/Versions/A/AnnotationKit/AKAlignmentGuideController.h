@class NSPanGestureRecognizer, AKPageController, NSInputAlignmentFilter, AKAlignedItem, NSString, NSInputAlignmentController, NSMutableArray;

@interface AKAlignmentGuideController : NSObject <NSInputAlignmentControllerDelegate> {
    struct CGPoint { double x; double y; } _initialDraggedAnnotationsCombinedCenter;
    struct CGPoint { double x0; double x1; } *_otherAnnotationCenters;
    unsigned long long _otherAnnotationCentersCount;
}

@property (weak) AKPageController *pageController;
@property BOOL exifHasFlippedAxes;
@property (retain, nonatomic) NSInputAlignmentController *alignmentController;
@property (retain, nonatomic) NSInputAlignmentFilter *alignmentFilter;
@property (retain, nonatomic) AKAlignedItem *alignmentItem;
@property (retain, nonatomic) NSMutableArray *alignmentGuides;
@property (weak, nonatomic) NSPanGestureRecognizer *panRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)alignmentController:(id)a0 shouldAlignOnMatch:(id)a1;
- (struct CGPoint { double x0; double x1; })guideAlignedPointForPoint:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 orRecognizer:(id)a2;
- (id)initWithPageController:(id)a0;

@end
