@interface SearchUIGridSectionModel : SearchUISectionModel

@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) int gridStyle;

+ (long long)sectionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRowModels:(id)a0 numberOfColumns:(long long)a1 gridStyle:(int)a2 section:(id)a3;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 dataSource:(id)a2;
- (BOOL)needsHeaderSeparator;
- (BOOL)needsHorizontalNavigation;
- (id)overriddenAccessibilityIdentifier;
- (id)rfHeroImageGridLayoutSectionForCardSection:(id)a0;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsWithAttributes:(id)a0 sectionIndex:(unsigned long long)a1;
- (void)setCornerMaskRulesOnRowModels:(id)a0 forColumnCount:(unsigned long long)a1;

@end
