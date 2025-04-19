@class NSCollectionLayoutSize;

@interface _NSCollectionPreferredSize : NSObject

@property (readonly, nonatomic, getter=isPreferredSizeDirty) BOOL preferredSizeDirty;
@property (readonly, nonatomic) struct CGSize { double width; double height; } originalSize;
@property (readonly, nonatomic) NSCollectionLayoutSize *layoutSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fittingSize;

+ (struct CGSize { double x0; double x1; })preferredSizeForOriginalSize:(struct CGSize { double x0; double x1; })a0 fittingSize:(struct CGSize { double x0; double x1; })a1 layoutSize:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (id)copyDirtyingPreferredSize;
- (id)initWithOriginalSize:(struct CGSize { double x0; double x1; })a0 fittingSize:(struct CGSize { double x0; double x1; })a1 layoutSize:(id)a2;
- (struct CGSize { double x0; double x1; })preferredSizeForOriginalSize:(struct CGSize { double x0; double x1; })a0 layoutSize:(id)a1;

@end
