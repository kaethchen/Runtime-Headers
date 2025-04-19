@class NSArray, NSMutableArray, UXCollectionViewUpdateItem;

@interface UXCollectionViewUpdateGap : NSObject

@property (retain, nonatomic) UXCollectionViewUpdateItem *firstUpdateItem;
@property (retain, nonatomic) UXCollectionViewUpdateItem *lastUpdateItem;
@property (readonly, nonatomic) NSArray *updateItems;
@property (readonly, nonatomic) NSMutableArray *deleteItems;
@property (readonly, nonatomic) NSMutableArray *insertItems;
@property (readonly, nonatomic) BOOL isDeleteBasedGap;
@property (readonly, nonatomic) BOOL hasInserts;
@property (readonly, nonatomic) BOOL isSectionBasedGap;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } beginningRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endingRect;

+ (id)gapWithUpdateItem:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)addUpdateItem:(id)a0;

@end
