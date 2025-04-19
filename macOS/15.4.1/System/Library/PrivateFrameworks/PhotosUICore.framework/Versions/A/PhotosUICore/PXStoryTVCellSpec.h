@class NSDictionary, NSFont;

@interface PXStoryTVCellSpec : PXFeatureSpec

@property (readonly, nonatomic) NSFont *titleFont;
@property (readonly, nonatomic) NSFont *subtitleFont;
@property (readonly, nonatomic) NSDictionary *titleSupportedCharactersAttributes;
@property (readonly, nonatomic) NSDictionary *titleUnsupportedCharactersAttributes;
@property (readonly, nonatomic) NSDictionary *subtitleSupportedCharactersAttributes;
@property (readonly, nonatomic) NSDictionary *subtitleUnsupportedCharactersAttributes;
@property (readonly, nonatomic) NSFont *memoryTitleFont;
@property (readonly, nonatomic) double memoryTitleLeading;
@property (readonly, nonatomic) double memoryTitleTracking;
@property (readonly, nonatomic) NSFont *memorySubtitleFont;
@property (readonly, nonatomic) double memorySubtitleLeading;
@property (readonly, nonatomic) double memorySubtitleTracking;

- (void).cxx_destruct;
- (id)_setupTitleFont;
- (BOOL)_isSupportedCharacterSetForFontDescriptor:(id)a0 fontSize:(double)a1 string:(id)a2 supportedCharacterAttributes:(id)a3 leading:(double)a4;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_languageAwareOutsetsForFont:(id)a0;
- (id)_setupSubtitleAttributesWithAllCharactersSupported:(BOOL)a0;
- (id)_setupSubtitleFont;
- (id)_setupTitleAttributesWithAllCharactersSupported:(BOOL)a0;
- (id)attributedStringForSubtitle:(id)a0;
- (id)attributedStringForTitle:(id)a0;
- (id)initWithExtendedTraitCollection:(id)a0;

@end
