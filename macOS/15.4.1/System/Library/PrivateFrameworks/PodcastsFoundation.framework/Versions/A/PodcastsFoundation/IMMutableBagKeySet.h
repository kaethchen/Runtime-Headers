@class NSMutableDictionary;

@interface IMMutableBagKeySet : AMSMutableBagKeySet

@property (retain, nonatomic) NSMutableDictionary *defaultValueMap;
@property (retain, nonatomic) NSMutableDictionary *valueTypeMap;

- (id)init;
- (void).cxx_destruct;
- (void)addBagKey:(id)a0 valueType:(unsigned long long)a1 defaultValue:(id)a2;

@end
