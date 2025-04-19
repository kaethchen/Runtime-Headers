@class NSString, NSMutableDictionary;

@interface PGGraphConcreteEdge : PGGraphEdge {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    NSString *_label;
}

- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)label;
- (unsigned long long)propertiesCount;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (id)propertyKeys;
- (BOOL)hasProperties;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (id)propertyDictionary;

@end
