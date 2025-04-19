@class NSString;

@interface SearchUIRFCardSectionRowModel : SearchUICardSectionRowModel {
    void /* unknown type, empty encoding */ _builderContext;
}

@property (nonatomic, readonly) NSString *reuseIdentifier;
@property (nonatomic, readonly) int separatorStyle;
@property (nonatomic, readonly) BOOL fillsBackgroundWithContent;
@property (nonatomic, readonly) BOOL hasLeadingImage;
@property (nonatomic, readonly) BOOL prefersNoSeparatorAbove;
@property (nonatomic, readonly) NSString *dragTitle;
@property (nonatomic, readonly) NSString *dragSubtitle;
@property (nonatomic, readonly) BOOL supportsCustomHighlightBehavior;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } intrinsicContentInset;
@property (nonatomic, readonly) double highlightReferenceFrameCornerRadius;

+ (BOOL)shouldHideViewForCardSection:(id)a0;
+ (BOOL)supportsConfigurationFor:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithResults:(id)a0 itemIdentifier:(id)a1;
- (id)initWithCardSection:(id)a0 queryId:(unsigned long long)a1 itemIdentifier:(id)a2;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3 itemIdentifier:(id)a4;
- (id)initWithResult:(id)a0 cardSection:(id)a1 queryId:(unsigned long long)a2 itemIdentifier:(id)a3;
- (id)initWithResult:(id)a0 itemIdentifier:(id)a1;

@end
