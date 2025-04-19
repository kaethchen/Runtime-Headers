@class TNPageLayoutContainer;

@interface TNPageContentLayout : TSDLayout

@property (readonly, weak) TNPageLayoutContainer *pageLayout;
@property (readonly) unsigned long long pageNumber;

- (void).cxx_destruct;
- (unsigned long long)pageCount;
- (void)validate;
- (id)computeLayoutGeometry;
- (Class)repClassOverride;
- (id)initWithPageLayout:(id)a0;

@end
