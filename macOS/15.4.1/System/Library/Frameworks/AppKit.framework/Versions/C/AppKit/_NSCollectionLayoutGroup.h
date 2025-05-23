@class NSArray, _NSCollectionLayoutSpacing;

@interface _NSCollectionLayoutGroup : _NSCollectionLayoutItem <NSCopying, _NSCollectionLayoutAPIRespresenting> {
    int _layoutAxis;
    BOOL _isCustomGroup;
    NSArray *_subitems;
    long long _count;
    NSArray *_supplementaryItems;
    _NSCollectionLayoutSpacing *_interItemSpacing;
    id /* block */ _subitemsProvider;
    id /* block */ _frameProvider;
    id /* block */ _customGroupItemProvider;
    id /* block */ _visualFormatProvider;
    NSArray *_visualFormats;
}

@property (copy, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) _NSCollectionLayoutSpacing *interItemSpacing;
@property (readonly, nonatomic) BOOL isHorizontalGroup;
@property (readonly, nonatomic) BOOL isVerticalGroup;
@property (readonly, nonatomic) BOOL isCustomGroup;
@property (nonatomic) long long groupOptions;

+ (id)verticalGroupWithSize:(id)a0 subitems:(id)a1;
+ (id)customGroupWithSize:(id)a0 frameProvider:(id /* block */)a1;
+ (id)groupWithLayoutAxis:(int)a0 size:(id)a1 subitems:(id)a2 count:(long long)a3;
+ (id)horizontalGroupWithSize:(id)a0 subitem:(id)a1 count:(long long)a2;
+ (id)horizontalGroupWithSize:(id)a0 subitems:(id)a1;
+ (id)horizontalGroupWithSize:(id)a0 subitemsProvider:(id /* block */)a1;
+ (id)layoutGroupWithSize:(id)a0 visualFormats:(id)a1 itemProvider:(id /* block */)a2;
+ (id)verticalGroupWithSize:(id)a0 subitem:(id)a1 count:(long long)a2;
+ (id)verticalGroupWithSize:(id)a0 subitemsProvider:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_apiRepresentation;
- (id)initWithlayoutSize:(id)a0 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 layoutAxis:(int)a2 isCustomGroup:(BOOL)a3 subitems:(id)a4 count:(long long)a5 supplementaryItems:(id)a6 interItemSpacing:(id)a7 groupOptions:(long long)a8 subitemsProvider:(id /* block */)a9 frameProvider:(id /* block */)a10 customGroupItemProvider:(id /* block */)a11 visualFormats:(id)a12 visualFormatProvider:(id /* block */)a13;
- (id)visualDescription;

@end
