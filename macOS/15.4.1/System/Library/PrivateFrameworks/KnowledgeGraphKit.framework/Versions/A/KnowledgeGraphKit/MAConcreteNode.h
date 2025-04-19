@class NSString, NSMutableDictionary;

@interface MAConcreteNode : MANode {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    float _weight;
    NSString *_label;
}

- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)label;
- (float)weight;
- (unsigned long long)propertiesCount;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (id)propertyKeys;
- (BOOL)hasProperties;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)propertyDictionary;

@end
