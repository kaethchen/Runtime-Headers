@class ABCardViewStyleProvider, ABCollectionRowViewFactory;
@protocol CNUIUserActionListDataSource, CNUIUserActionContext;

@interface ABCollectionViewItemFactory : NSObject {
    ABCollectionRowViewFactory *_rowViewFactory;
    ABCollectionRowViewFactory *_rowViewEditModeFactory;
}

@property (readonly, weak, nonatomic) id<CNUIUserActionListDataSource> userActionListDataSource;
@property (readonly, nonatomic) id<CNUIUserActionContext> userActionContext;
@property (nonatomic) BOOL shouldFormatURLs;
@property (nonatomic) BOOL shouldShowActionMenu;
@property (nonatomic) BOOL shouldBuildActionGlyphs;
@property (retain, nonatomic) ABCardViewStyleProvider *styleProvider;

+ (void)initialize;
+ (id)CNPropertyKeyForCollectionViewItemProperty:(id)a0;
+ (id)actionsForItem:(id)a0;
+ (id)actionsForItem:(id)a0 dataSource:(id)a1 context:(id)a2;
+ (void)addItemToPool:(id)a0;
+ (id)debugDateFormatterLocale;
+ (id)defaultLunarCalendar;
+ (id)itemFromPoolWithKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)buildVisibleViewForItem:(id)a0 delegate:(id)a1;
- (id)collectionItemForKey:(id)a0 multiValue:(id)a1 index:(unsigned long long)a2 delegate:(id)a3;
- (id)initWithUserActionListDataSource:(id)a0;
- (id)accountKeyItemForMultiValue:(id)a0 index:(unsigned long long)a1 delegate:(id)a2;
- (id)addressesCollectionItemForMultiValue:(id)a0 index:(unsigned long long)a1 delegate:(id)a2;
- (id)addressingGrammarCollectionItemForMultiValue:(id)a0 index:(unsigned long long)a1 delegate:(id)a2;
- (id)alertToneCollectionItemForMultiValue:(id)a0 key:(id)a1 index:(unsigned long long)a2 delegate:(id)a3;
- (id)alternateBirthdayCollectionItemForMultiValue:(id)a0 index:(unsigned long long)a1 delegate:(id)a2;
- (id)birthdayCollectionItemForMultiValue:(id)a0 index:(unsigned long long)a1 delegate:(id)a2;
- (void)buildActionGlyphsForItem:(id)a0 delegate:(id)a1;
- (id)displayNameCollectionItemForMultiValue:(id)a0 index:(unsigned long long)a1 delegate:(id)a2;
- (id)emailCollectionItemForMultiValue:(id)a0 index:(unsigned long long)a1 delegate:(id)a2;
- (id)faceTimeActionsItemForMultiValue:(id)a0 index:(unsigned long long)a1 delegate:(id)a2;
- (id)instantMessageCollectionItemForMultiValue:(id)a0 index:(unsigned long long)a1 delegate:(id)a2;
- (id)linkedPersonCollectionItemForMultiValue:(id)a0 index:(unsigned long long)a1 delegate:(id)a2;
- (id)maidenNameCollectionItemForMultiValue:(id)a0 index:(unsigned long long)a1 delegate:(id)a2;
- (id)notesCollectionItemForMultiValue:(id)a0 index:(unsigned long long)a1 delegate:(id)a2;
- (id)otherDatesCollectionItemForMultiValue:(id)a0 index:(unsigned long long)a1 delegate:(id)a2;
- (id)phoneCollectionItemForMultiValue:(id)a0 index:(unsigned long long)a1 delegate:(id)a2;
- (id)preferredNameCollectionItemForMultiValue:(id)a0 index:(unsigned long long)a1 delegate:(id)a2;
- (id)relatedNamesCollectionItemForMultiValue:(id)a0 index:(unsigned long long)a1 delegate:(id)a2;
- (id)socialProfileCollectionItemForMultiValue:(id)a0 index:(unsigned long long)a1 delegate:(id)a2;
- (id)urlCollectionItemForMultiValue:(id)a0 index:(unsigned long long)a1 delegate:(id)a2;

@end
