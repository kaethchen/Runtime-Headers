@class NSCollectionLayoutSection, _NSCollectionPreferredSizes;
@protocol _NSCollectionLayoutSectionSolver;

@interface _NSCollectionSectionSolutionBookmark : NSObject

@property (readonly, nonatomic) id<_NSCollectionLayoutSectionSolver> solution;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } globalFrame;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } orthogonalContentLayoutFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } orthogonalContentSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } orthogonalContentSizeAdjustedForContentInsets;
@property (readonly, nonatomic) NSCollectionLayoutSection *section;
@property (readonly, nonatomic) _NSCollectionPreferredSizes *preferredSizes;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithGlobalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithSolution:(id)a0 globalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2 section:(id)a3;
- (id)initWithSolution:(id)a0 globalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2 section:(id)a3 preferredSizes:(id)a4;

@end
