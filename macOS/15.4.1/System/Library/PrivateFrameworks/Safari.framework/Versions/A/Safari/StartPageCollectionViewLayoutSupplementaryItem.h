@class NSString;

@interface StartPageCollectionViewLayoutSupplementaryItem : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, nonatomic) double height;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } itemEdgeInsets;

+ (id)headerSupplementaryItemWithHeight:(double)a0;
+ (id)headerSupplementaryItemWithKind:(id)a0 height:(double)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithKind:(id)a0;

@end
