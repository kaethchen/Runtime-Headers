@class NSArray, SFLeadingTrailingCardSection;

@interface SearchUILeadingTrailingSectionModel : SearchUISectionModel

@property (retain, nonatomic) SFLeadingTrailingCardSection *cardSection;
@property (retain, nonatomic) NSArray *leadingRowModels;
@property (retain, nonatomic) NSArray *trailingRowModels;
@property (nonatomic) double horizontalSpacing;
@property (nonatomic) double verticalSpacing;
@property (nonatomic) double leadingFractionalWidth;
@property (nonatomic) double preferredHeight;
@property (nonatomic) BOOL prefersSeparatorsInLeadingGroup;
@property (nonatomic) BOOL prefersSeparatorsInTrailingGroup;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } leadingGroupContentInsets;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } trailingGroupContentInsets;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } sectionInsets;
@property (nonatomic) BOOL customSectionInsets;

+ (long long)sectionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)buildGroupForFractionalWidth:(double)a0 numberOfCards:(long long)a1 isTopAligned:(BOOL)a2 prefersSeparator:(BOOL)a3 forView:(id)a4;
- (id)copyWithRowModels:(id)a0;
- (id)initWithCardSection:(id)a0 rowModels:(id)a1 result:(id)a2 queryId:(unsigned long long)a3 section:(id)a4;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 dataSource:(id)a2;
- (id)primaryCardSection;
- (BOOL)primaryCardSectionIsLeading;
- (id)rowModels;
- (id)rowModelsForCardSections:(id)a0 result:(id)a1 queryId:(unsigned long long)a2;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0 forRowModel:(id)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsWithAttributes:(id)a0 sectionIndex:(unsigned long long)a1;

@end
