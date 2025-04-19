@class NSMutableArray;
@protocol NSInputAlignmentControllerDelegate;

@interface NSInputAlignmentController : NSObject {
    NSMutableArray *_sessions;
    id _reserved0;
}

@property (weak) id<NSInputAlignmentControllerDelegate> delegate;

+ (struct CGPoint { double x0; double x1; })alignmentDeltaFromMatches:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_delegateShouldAlignOnMatch:(id)a0;
- (id)_sessionForItem:(id)a0;
- (id)alignItem:(id)a0 usingFilter:(id)a1;
- (id)checkAlignmentOfItem:(id)a0;
- (void)clearAlignmentStateForItem:(id)a0;
- (void)setAlignmentGuides:(id)a0 affectingItem:(id)a1;

@end
