@class NSView;

@interface SearchUIRFCardSectionView : SearchUICardSectionView <VRXInteractionDelegate> {
    void /* unknown type, empty encoding */ hostingView;
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic, readonly) NSView *highlightReferenceView;
@property (nonatomic, readonly) double highlightFrameCornerRadius;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (id)setupContentView;
- (void)createStyledButtons:(id)a0 buttonFont:(id)a1 isCompact:(BOOL)a2 :(id /* block */)a3;
- (void)emitInstrumentationEvent:(id)a0;
- (void)informHostOfViewResize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (void)performSFCommand:(id)a0;
- (void)reportSFFeedback:(id)a0;
- (void)updateWithRowModel:(id)a0;

@end
