@class NSString, NSIndexPath;

@interface _NSCollectionViewItemKey : NSObject <NSCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, retain, nonatomic) NSIndexPath *indexPath;
@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isClone;

+ (id)collectionItemKeyForCellWithIndexPath:(id)a0;
+ (id)collectionItemKeyForDecorationViewOfKind:(id)a0 andIndexPath:(id)a1;
+ (id)collectionItemKeyForLayoutAttributes:(id)a0;
+ (id)collectionItemKeyForSupplementaryViewOfKind:(id)a0 andIndexPath:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyAsClone:(BOOL)a0;
- (id)initWithType:(long long)a0 indexPath:(id)a1 identifier:(id)a2;
- (id)initWithType:(long long)a0 indexPath:(id)a1 identifier:(id)a2 clone:(BOOL)a3;

@end
