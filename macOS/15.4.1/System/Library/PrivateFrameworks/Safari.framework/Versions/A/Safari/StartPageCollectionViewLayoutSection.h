@class NSArray;

@interface StartPageCollectionViewLayoutSection : NSObject <NSCopying>

@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentEdgeInsets;
@property (nonatomic) long long maximumNumberOfColumns;
@property (nonatomic) long long maximumNumberOfRows;
@property (nonatomic) long long maximumNumberOfItems;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) struct CGSize { double width; double height; } interItemSpacing;
@property (nonatomic) long long widthDimensionType;
@property (copy, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) NSArray *decorationItems;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
