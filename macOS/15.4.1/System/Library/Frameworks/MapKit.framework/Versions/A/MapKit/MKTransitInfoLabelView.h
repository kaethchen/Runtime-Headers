@class NSArray, MKArtworkDataSourceCache;

@interface MKTransitInfoLabelView : _MKUILabel {
    double _maxWidth;
    double _spaceBetweenIcons;
    id /* block */ _textForTruncationGenerator;
}

@property (nonatomic) long long iconSize;
@property (nonatomic) long long shieldSize;
@property (copy, nonatomic) NSArray *labelItems;
@property (nonatomic) double spaceBetweenShields;
@property (nonatomic) double maxShieldHeight;
@property (retain, nonatomic) MKArtworkDataSourceCache *artworkCache;

+ (id)stringAttributesForFont:(id)a0 lineBreakMode:(unsigned long long)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithMapItem:(id)a0;
- (void)setMapItem:(id)a0;
- (void)_setupLabelInfo;
- (id)_generateText;
- (id)_imageForArtworkDataSource:(id)a0;
- (id)_imageForLabelItem:(id)a0;
- (id)_imageForShieldDataSource:(id)a0;
- (id)_stringAttributes;
- (id)initWithLabelItems:(id)a0 iconSize:(long long)a1 shieldSize:(long long)a2 spaceBetweenShields:(double)a3 maxWidth:(double)a4;
- (id)initWithMapItem:(id)a0 maxWidth:(double)a1;
- (void)setMaxWidth:(double)a0 textForTruncationGenerator:(id /* block */)a1;
- (void)setSpaceBetweenIcons:(double)a0;

@end
