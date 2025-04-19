@class FI_TSpotlightMetaDataStackView, FI_TPreviewOptions;

@interface FI_TColumnPreviewSpotlightMetaDataController : FI_TSpotlightMetaDataController

@property (retain, nonatomic) FI_TPreviewOptions *previewOptions;
@property (readonly, nonatomic) FI_TSpotlightMetaDataStackView *stackView;
@property (nonatomic) BOOL onlyShowUserSelected;

- (void).cxx_destruct;
- (void)updateFilters;
- (void)configureView;
- (void)initCommon;
- (BOOL)isApplicableToNodes:(const void *)a0;

@end
