@class NSString, _NSCollectionLayoutAnchor, _NSCollectionLayoutEdgeSpacing;

@interface _NSCollectionLayoutSupplementaryItem : _NSCollectionLayoutItem <NSCopying, _NSCollectionLayoutAPIRespresenting> {
    _NSCollectionLayoutEdgeSpacing *_edgeSpacing;
    NSString *_name;
}

@property (nonatomic) long long zIndex;
@property (readonly, nonatomic) NSString *elementKind;
@property (readonly, nonatomic) _NSCollectionLayoutAnchor *containerAnchor;
@property (readonly, nonatomic) _NSCollectionLayoutAnchor *itemAnchor;
@property (nonatomic) BOOL canAdjustContentSize;

+ (id)supplementaryItemWithSize:(id)a0 elementKind:(id)a1 containerAnchor:(id)a2;
+ (id)supplementaryItemWithSize:(id)a0 elementKind:(id)a1 containerAnchor:(id)a2 itemAnchor:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_apiRepresentation;
- (id)initWithSize:(id)a0 elementKind:(id)a1 zIndex:(long long)a2 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a3 containerAnchor:(id)a4 itemAnchor:(id)a5 edgeSpacing:(id)a6 name:(id)a7 canAdjustContentSize:(BOOL)a8;

@end
