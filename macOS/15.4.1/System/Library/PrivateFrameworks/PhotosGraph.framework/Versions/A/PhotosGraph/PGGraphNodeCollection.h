@class MANodeFilter;

@interface PGGraphNodeCollection : MANodeCollection <PhotosGraph.GenericNodeCollection>

@property (class, readonly, nonatomic) Class nodeClass;
@property (class, readonly, nonatomic) MANodeFilter *filter;

+ (id)nodesInGraph:(id)a0;
+ (id)subsetInCollection:(id)a0;

- (void)enumerateUsingBlock:(id /* block */)a0;
- (id)initWithSubsetInGraph:(id)a0 elementIdentifiers:(id)a1;

@end
