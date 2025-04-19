@class NSArray;

@interface NSCompositeAttributeDescription : NSAttributeDescription {
    NSArray *_elements;
}

@property (copy) NSArray *elements;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)_initWithName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDefaultValue:(id)a0;
- (unsigned long long)attributeType;
- (BOOL)isTransient;
- (void)setAttributeType:(unsigned long long)a0;
- (void)setTransient:(BOOL)a0;
- (BOOL)_isSchemaEqual:(id)a0;
- (void)_addElement:(id)a0;
- (id)_buildDefaultValue;
- (void)_createCachesAndOptimizeState;
- (id)_flattenElements:(id)a0;
- (id)_flattenedElements;
- (id)_initWithName:(id)a0 type:(unsigned long long)a1;
- (id)_initWithName:(id)a0 type:(unsigned long long)a1 withClassName:(id)a2;
- (id)_initWithType:(unsigned long long)a0;
- (unsigned long long)_propertyType;
- (void)_setEntityAndMaintainIndices:(id)a0;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5 fetchRequests:(id)a6;

@end
