@class NSString;

@interface NSCollectionLayoutContainer : NSObject <NSCollectionLayoutContainer>

@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;
@property (readonly) struct CGSize { double x0; double x1; } effectiveContentSize;
@property (readonly) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } effectiveContentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentSize:(struct CGSize { double x0; double x1; })a0 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
