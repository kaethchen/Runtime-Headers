@interface PGGraphInferredPersonEdge : PGGraphPropertylessEdge

+ (id)filter;

- (unsigned short)domain;
- (id)label;
- (id)initFromPersonNode:(id)a0 toInferredPersonNode:(id)a1;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;

@end
