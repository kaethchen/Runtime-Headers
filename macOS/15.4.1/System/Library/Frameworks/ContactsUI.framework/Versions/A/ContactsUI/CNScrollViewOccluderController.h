@class NSScrollView, NSView, CNUIViewRevealer;
@protocol CNCancelable;

@interface CNScrollViewOccluderController : NSObject

@property (weak, nonatomic) NSScrollView *scrollView;
@property (weak, nonatomic) NSView *topOccluder;
@property (weak, nonatomic) NSView *bottomOccluder;
@property (retain, nonatomic) CNUIViewRevealer *viewRevealer;
@property (retain, nonatomic) id<CNCancelable> occlusionDidChangeToken;
@property (nonatomic) BOOL animateOccluderVisibility;

- (void)dealloc;
- (void).cxx_destruct;
- (void)adjustOccluders:(id)a0;
- (double)documentHeight;
- (id)initWithScrollView:(id)a0 topOccluder:(id)a1 bottomOccluder:(id)a2 viewRevealer:(id)a3;
- (id)makeOcclusionDidChangeObservable;

@end
