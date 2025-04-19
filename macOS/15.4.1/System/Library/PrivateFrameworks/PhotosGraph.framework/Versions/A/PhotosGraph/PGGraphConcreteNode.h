@class NSString, NSMutableDictionary;

@interface PGGraphConcreteNode : PGGraphNode {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    NSString *_label;
}

- (id)name;
- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)UUID;
- (id)label;
- (unsigned long long)propertiesCount;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (id)propertyKeys;
- (BOOL)hasProperties;
- (id)_stringValueForPropertyWithKey:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)propertyDictionary;

@end
