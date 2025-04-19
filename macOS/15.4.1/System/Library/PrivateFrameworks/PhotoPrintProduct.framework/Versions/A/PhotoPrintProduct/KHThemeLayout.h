@class NSString;

@interface KHThemeLayout : KHModel <KHJSONGeneratorProtocol> {
    long long _themeId;
    long long _layoutId;
    long long _productId;
    long long _increasedHoleLayout;
    long long _defaultFrontCover;
    long long _defaultFrontFlap;
    long long _defaultBackFlap;
    long long _defaultBackCover;
    long long _defaultFirstPageSequence;
    long long _defaultCyclePageSequence;
    long long _defaultLastPageSequence;
    long long _visible;
    NSString *_alternateLayouts;
    unsigned long long _type;
    long long _previewSequence;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultBackCoverSequenceByLayoutIdForTheme:(id)a0 product:(id)a1;
+ (id)defaultBackFlapsByLayoutIdForTheme:(id)a0 product:(id)a1;
+ (id)defaultCyclePageSequenceByLayoutIdForTheme:(id)a0 product:(id)a1;
+ (id)defaultFirstPageSequenceByLayoutIdForTheme:(id)a0 product:(id)a1;
+ (id)defaultFrontCoverSequenceByLayoutIdForTheme:(id)a0 product:(id)a1;
+ (id)defaultFrontFlapsByLayoutIdForTheme:(id)a0 product:(id)a1;
+ (id)generateModelFromJSON:(id)a0 inDatabase:(id)a1 bundlePath:(id)a2;
+ (id)increasedHoleCountLayoutForLayout:(id)a0 forTheme:(id)a1 andProduct:(id)a2;
+ (id)layoutUsageTypeByLayoutIdForTheme:(id)a0 product:(id)a1 forLayoutIds:(id)a2;
+ (id)layoutWithLegacyName:(id)a0 forTheme:(id)a1;
+ (id)themeLayoutForTheme:(id)a0 andLayout:(id)a1;

- (void)dealloc;
- (void)setType:(unsigned long long)a0;
- (unsigned long long)type;
- (void)setVisible:(long long)a0;
- (long long)productId;
- (void)setProductId:(long long)a0;
- (long long)visible;
- (long long)layoutId;
- (void)setLayoutId:(long long)a0;
- (id)JSONRepresentation;
- (void)cacheProductId:(long long)a0;
- (long long)defaultBackFlap;
- (long long)previewSequence;
- (long long)themeId;
- (id)alternateLayouts;
- (void)cacheAlternateLayouts:(id)a0;
- (void)cacheDefaultBackCover:(long long)a0;
- (void)cacheDefaultBackFlap:(long long)a0;
- (void)cacheDefaultCyclePageSequence:(long long)a0;
- (void)cacheDefaultFirstPageSequence:(long long)a0;
- (void)cacheDefaultFrontCover:(long long)a0;
- (void)cacheDefaultFrontFlap:(long long)a0;
- (void)cacheDefaultLastPageSequence:(long long)a0;
- (void)cacheIncreasedHoleLayout:(long long)a0;
- (void)cacheLayoutId:(long long)a0;
- (void)cachePreviewSequence:(long long)a0;
- (void)cacheThemeId:(long long)a0;
- (void)cacheType:(unsigned long long)a0;
- (void)cacheVisible:(long long)a0;
- (long long)defaultBackCover;
- (long long)defaultCyclePageSequence;
- (long long)defaultFirstPageSequence;
- (long long)defaultFrontCover;
- (long long)defaultFrontFlap;
- (long long)defaultLastPageSequence;
- (long long)increasedHoleLayout;
- (void)setAlternateLayouts:(id)a0;
- (void)setDefaultBackCover:(long long)a0;
- (void)setDefaultBackFlap:(long long)a0;
- (void)setDefaultCyclePageSequence:(long long)a0;
- (void)setDefaultFirstPageSequence:(long long)a0;
- (void)setDefaultFrontCover:(long long)a0;
- (void)setDefaultFrontFlap:(long long)a0;
- (void)setDefaultLastPageSequence:(long long)a0;
- (void)setIncreasedHoleLayout:(long long)a0;
- (void)setPreviewSequence:(long long)a0;
- (void)setThemeId:(long long)a0;

@end
