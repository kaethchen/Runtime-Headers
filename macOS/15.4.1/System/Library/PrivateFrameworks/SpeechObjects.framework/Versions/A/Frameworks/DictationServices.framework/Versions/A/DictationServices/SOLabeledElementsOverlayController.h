@class NSMutableArray;

@interface SOLabeledElementsOverlayController : NSObject <SOLabeledElementsOverlayControllerProtocol>

@property (retain, nonatomic) NSMutableArray *labeledElements;
@property (nonatomic) BOOL isActive;

- (id)init;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)addLabelViewsForElements:(id)a0;
- (void)addLabeledElements:(id)a0;
- (void)arrangeNewLabeledElements:(id)a0;
- (void)clearLabeledElements;
- (void)hideLabeledElements;
- (void)removeLabelViews;
- (void)showLabeledElements;

@end
