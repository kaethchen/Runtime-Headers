@class NSKnownKeysDictionary;

@interface ABCDRecordMapper : NSObject {
    NSKnownKeysDictionary *__ABKeysForProperties;
    NSKnownKeysDictionary *__ABPropertiesForKeys;
    NSKnownKeysDictionary *__ABEntitiesForKeys;
    NSKnownKeysDictionary *__ABEntitiesMainKeys;
    struct __CFDictionary { } *__ABEntitiesValueWithEntitySelector;
    struct __CFDictionary { } *__ABEntitiesEntityWithValueSelector;
    NSKnownKeysDictionary *__ABEntitiesConverterKeys;
}

+ (id)sharedInstance;

- (id)init;
- (id)propertyForKey:(id)a0;
- (id)entityNameForPropertyKey:(id)a0;
- (void)initializeDictionaries;
- (void)initializePropertiesForKeys:(id)a0;
- (id)keyForProperty:(id)a0 entityName:(id *)a1 entityKey:(id *)a2 entityWithValueSel:(SEL *)a3 valueWithEntitySel:(SEL *)a4 converterKeys:(id *)a5;

@end
