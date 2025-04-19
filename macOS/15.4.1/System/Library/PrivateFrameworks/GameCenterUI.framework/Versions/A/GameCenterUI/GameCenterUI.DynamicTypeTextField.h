@class NSFont;

@interface GameCenterUI.DynamicTypeTextField : NSTextField {
    void /* unknown type, empty encoding */ fontUseCaseContentSizeCategory;
    void /* unknown type, empty encoding */ shouldMeasureExtraTallCharacters;
    void /* unknown type, empty encoding */ fontUseCase;
    void /* unknown type, empty encoding */ _allowsVibrancy;
    void /* unknown type, empty encoding */ systemDesign;
    void /* unknown type, empty encoding */ directionalTextAlignment;
}

@property (class, nonatomic) Class cellClass;

@property (nonatomic, retain) NSFont *font;
@property (nonatomic) BOOL allowsVibrancy;
@property (nonatomic) long long alignment;
@property (nonatomic, readonly) BOOL hasContent;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)jet_traitCollectionDidChange:(id)a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
