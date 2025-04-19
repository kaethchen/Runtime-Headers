@class NSMutableDictionary;

@interface BSAbstractDefaultDomainClassMetadata : NSObject {
    Class _clazz;
    NSMutableDictionary *_propertyNameToPropertyMap;
    NSMutableDictionary *_selectorToPropertyMap;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
