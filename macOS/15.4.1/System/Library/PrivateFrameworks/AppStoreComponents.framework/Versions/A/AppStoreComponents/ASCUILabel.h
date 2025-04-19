@class NSString, JUTraitCollection, NSAttributedString, NSFont;

@interface ASCUILabel : NSTextField

@property (nonatomic) double alpha;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long textAlignment;
@property (nonatomic) double minimumScaleFactor;
@property (retain, nonatomic) NSFont *_fontForShortcutBaselineCalculation;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic, setter=_setTextColorFollowsTintColor:) BOOL _textColorFollowsTintColor;
@property (nonatomic) long long semanticContentAttribute;
@property (readonly, nonatomic) JUTraitCollection *traitCollection;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didInit;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
