@class NSString;

@interface _NSCollectionLayoutAuxiliaryKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *elementKind;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long auxiliaryKind;
@property (readonly, nonatomic) BOOL isSupplementary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithElementKind:(id)a0 index:(long long)a1 auxiliaryKind:(long long)a2 isSupplementary:(BOOL)a3;

@end
