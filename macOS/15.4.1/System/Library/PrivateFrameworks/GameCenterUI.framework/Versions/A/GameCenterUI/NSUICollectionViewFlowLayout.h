@interface NSUICollectionViewFlowLayout : NSUICollectionViewLayout

@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) struct CGSize { double width; double height; } headerReferenceSize;
@property (nonatomic) struct CGSize { double width; double height; } footerReferenceSize;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } sectionInset;

@end
