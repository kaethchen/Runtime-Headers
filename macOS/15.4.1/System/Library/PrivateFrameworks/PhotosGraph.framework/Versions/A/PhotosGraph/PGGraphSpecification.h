@interface PGGraphSpecification : MAGraphSpecification

- (id)init;
- (void)enumerateEdgeClassesUsingBlock:(id /* block */)a0;
- (void)enumerateNodeClassesUsingBlock:(id /* block */)a0;
- (id)edgeClassByDomain;
- (id)edgeClassByDomainAndLabel;
- (Class)edgeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (id)nodeClassByDomain;
- (id)nodeClassByDomainAndLabel;
- (Class)nodeClassWithLabel:(id)a0 domain:(unsigned short)a1;

@end
