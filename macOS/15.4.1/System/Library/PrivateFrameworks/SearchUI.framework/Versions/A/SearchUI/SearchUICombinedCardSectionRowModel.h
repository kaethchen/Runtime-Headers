@class NSArray;

@interface SearchUICombinedCardSectionRowModel : SearchUIRowModel

@property (retain, nonatomic) NSArray *cardSectionRowModels;
@property (readonly) NSArray *snippetUICardSections;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)backgroundImage;
- (id)reuseIdentifier;
- (id)backgroundColor;
- (void)setIsTopHit:(BOOL)a0;
- (id)cardSection;
- (id)nextCard;
- (BOOL)isDraggable;
- (int)separatorStyle;
- (id)dragURL;
- (Class)cellViewClass;
- (Class)collectionViewCellClass;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)firstRowModel;
- (id)initWithResult:(id)a0 cardSectionRowModels:(id)a1 cardSection:(id)a2 dataSourceIdentifier:(id)a3;
- (id)initWithResult:(id)a0 cardSectionRowModels:(id)a1 dataSourceIdentifier:(id)a2;
- (BOOL)isTappable;
- (id)punchouts;

@end
