@class NSArray, StartPageCollectionViewLayoutSection;

@interface _StartPageCollectionViewLayoutSectionDefinition : NSObject

@property (readonly, copy, nonatomic) StartPageCollectionViewLayoutSection *layoutSection;
@property (copy, nonatomic) NSArray *supplementaryItemFrames;
@property (nonatomic) long long sectionIndex;
@property (nonatomic) double sectionOffset;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic) long long numberOfRows;
@property (nonatomic) long long numberOfRowsIncludingDraggedIndexPath;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) long long numberOfItemsIncludingDraggedIndexPath;
@property (nonatomic) long long actualNumberOfItems;
@property (nonatomic) BOOL isCollapsed;
@property (nonatomic) BOOL showsAsCollapsed;
@property (nonatomic) BOOL hidingAllElements;
@property (nonatomic) long long numberOfRowsWhenCollapsed;
@property (nonatomic) long long numberOfItemsWhenCollapsed;
@property (readonly, nonatomic) BOOL canCollapse;
@property (readonly, nonatomic) long long effectiveNumberOfRows;
@property (readonly, nonatomic) long long effectiveNumberOfItems;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) struct CGSize { double width; double height; } interItemSpacing;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentEdgeInsets;
@property (nonatomic) double topContentOffsetInSection;
@property (nonatomic) double contentHeight;
@property (nonatomic) double contentHeightIncludingDraggedIndexPath;
@property (nonatomic) double contentHeightWhenCollapsed;
@property (readonly, nonatomic) double effectiveContentHeight;
@property (readonly, nonatomic) double sectionHeight;
@property (readonly, nonatomic) double sectionHeightWhenCollapsed;
@property (readonly, nonatomic) double effectiveSectionHeight;

- (void).cxx_destruct;
- (id)initWithLayoutSection:(id)a0;

@end
