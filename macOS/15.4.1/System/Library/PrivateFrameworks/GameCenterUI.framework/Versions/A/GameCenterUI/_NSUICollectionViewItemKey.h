@class NSString, NSIndexPath;

@interface _NSUICollectionViewItemKey : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, retain, nonatomic) NSIndexPath *indexPath;
@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isClone;

+ (id)collectionItemKeyForCellWithIndexPath:(id)a0;
+ (id)collectionItemKeyForDecorationViewOfKind:(id)a0 andIndexPath:(id)a1;
+ (id)collectionItemKeyForLayoutAttributes:(id)a0;
+ (id)collectionItemKeyForSupplementaryViewOfKind:(id)a0 andIndexPath:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setType:(unsigned long long)a0;
- (void)setIdentifier:(id)a0;
- (id)copyAsClone:(BOOL)a0;
- (id)initWithType:(unsigned long long)a0 indexPath:(id)a1 identifier:(id)a2;
- (id)initWithType:(unsigned long long)a0 indexPath:(id)a1 identifier:(id)a2 clone:(BOOL)a3;
- (void)setIndexPath:(id)a0;

@end
