@class UIFont, UITraitCollection;
@protocol UITraitEnvironment;

@interface VSFontCenter : NSObject

@property (copy, nonatomic) UIFont *title0Font;
@property (copy, nonatomic) UIFont *title1Font;
@property (copy, nonatomic) UIFont *title2Font;
@property (copy, nonatomic) UIFont *title3Font;
@property (copy, nonatomic) UIFont *headlineFont;
@property (copy, nonatomic) UIFont *subheadlineFont;
@property (copy, nonatomic) UIFont *bodyFont;
@property (copy, nonatomic) UIFont *calloutFont;
@property (copy, nonatomic) UIFont *footnoteFont;
@property (copy, nonatomic) UIFont *caption1Font;
@property (copy, nonatomic) UIFont *caption2Font;
@property (copy, nonatomic) UIFont *appAgeRatingFont;
@property (weak, nonatomic) id<UITraitEnvironment> traitEnvironment;
@property (copy, nonatomic) UITraitCollection *traitCollection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)_updateFontsWithTraitCollection:(id)a0;
- (id)initWithTraitEnvironment:(id)a0;

@end
