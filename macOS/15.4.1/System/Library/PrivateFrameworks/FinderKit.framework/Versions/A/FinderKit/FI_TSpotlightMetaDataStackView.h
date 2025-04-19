@class NSView, NSFont, FI_TTitleAndValueView, NSArray, NSSet, NSStackView, NSDictionary, NSMutableArray;

@interface FI_TSpotlightMetaDataStackView : FI_TUpdateLayerView {
    FI_TTitleAndValueView *_genericTitleAndValueView;
    NSMutableArray *_filterViews;
    BOOL _populateForAnimating;
}

@property (retain, nonatomic) NSDictionary *spotlightMetaData;
@property (retain, nonatomic) NSArray *metaDataOrder;
@property (retain, nonatomic) NSSet *filteredMetadata;
@property (nonatomic, getter=isFilterActive) BOOL filterActive;
@property (readonly, nonatomic) long long hiddenAttributesCountDelta;
@property (nonatomic) double interRowGap;
@property (nonatomic) unsigned long long maxAttributesToDisplay;
@property (readonly, nonatomic) unsigned long long numRows;
@property (nonatomic) BOOL addLabelSuffix;
@property (nonatomic) BOOL showAttributesWithNoData;
@property (retain, nonatomic) NSView *viewForTitleWidth;
@property (nonatomic) BOOL useRelativeDates;
@property (readonly, retain, nonatomic) NSStackView *stackView;
@property (readonly, nonatomic) BOOL centerAligned;
@property (retain, nonatomic) NSFont *font;
@property (nonatomic) double valueViewTopInset;
@property (nonatomic) double valueViewBottomInset;

- (void).cxx_destruct;
- (void)reset;
- (void)awakeFromNib;
- (void)aboutToTearDown;
- (void)initCommon;
- (void)populate;
- (id)prepareForAnimatingExpansion:(BOOL)a0;

@end
