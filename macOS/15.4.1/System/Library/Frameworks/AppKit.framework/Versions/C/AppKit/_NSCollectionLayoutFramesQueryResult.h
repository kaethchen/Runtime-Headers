@class NSCollectionLayoutItem, NSCollectionLayoutSupplementaryItem, NSUUID;
@protocol _NSCollectionLayoutAuxiliaryItem;

@interface _NSCollectionLayoutFramesQueryResult : NSObject <_NSCollectionLayoutFramesQueryResult, NSCopying>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long zIndex;
@property (readonly, nonatomic) long long effectiveZIndex;
@property (readonly, nonatomic) long long resultKind;
@property (readonly, nonatomic) NSCollectionLayoutItem *item;
@property (readonly, nonatomic) NSCollectionLayoutSupplementaryItem *supplementaryItem;
@property (readonly, nonatomic) id<_NSCollectionLayoutAuxiliaryItem> auxiliaryItem;
@property (readonly, nonatomic) long long auxiliaryKind;
@property (readonly, nonatomic) NSUUID *supplementaryEnrollmentIdentifier;
@property (readonly, nonatomic) BOOL isSupplementary;
@property (readonly, nonatomic) BOOL isDecoration;
@property (readonly, nonatomic) BOOL isAuxiliary;
@property (readonly, nonatomic) BOOL isItem;
@property (readonly, nonatomic) BOOL isAuxiliaryKindGlobal;
@property (readonly, nonatomic) BOOL isAuxiliaryKindSection;
@property (readonly, nonatomic) BOOL isAuxiliaryKindGroup;
@property (readonly, nonatomic) BOOL isAuxiliaryKindItem;

+ (id)kindIndexKeyForKind:(id)a0 index:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)copyWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 index:(long long)a1;
- (id)copyWithIndex:(long long)a0;
- (id)copyWithOffset:(struct CGPoint { double x0; double x1; })a0 index:(long long)a1 supplementaryEnrollmentIdentifier:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 index:(long long)a1 zIndex:(long long)a2 resultKind:(long long)a3 item:(id)a4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 index:(long long)a1 zIndex:(long long)a2 resultKind:(long long)a3 item:(id)a4 auxiliaryKind:(long long)a5 supplementaryEnrollmentIdentifier:(id)a6;
- (id)kindIndexKey;

@end
