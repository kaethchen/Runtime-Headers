@interface NSAEDescriptorTranslator : NSObject {
    id _descToObjMap;
    id _objToDescMap;
}

+ (id)_arrayByTranslatingAEList:(id)a0 toType:(id)a1 inSuite:(id)a2;
+ (id)_dateByTranslatingLongDateTimeDescriptor:(id)a0 toType:(id)a1 inSuite:(id)a2;
+ (id)_descriptorByTranslatingArray:(id)a0 ofObjectsOfType:(id)a1 inSuite:(id)a2;
+ (id)_descriptorByTranslatingData:(id)a0 ofType:(id)a1 inSuite:(id)a2;
+ (id)_descriptorByTranslatingDate:(id)a0 ofType:(id)a1 inSuite:(id)a2;
+ (id)_descriptorByTranslatingDictionary:(id)a0 ofType:(id)a1 inSuite:(id)a2;
+ (id)_descriptorByTranslatingNull:(id)a0 ofType:(id)a1 inSuite:(id)a2;
+ (id)_descriptorByTranslatingNumber:(id)a0 ofType:(id)a1 inSuite:(id)a2;
+ (id)_descriptorByTranslatingString:(id)a0 ofType:(id)a1 inSuite:(id)a2;
+ (id)_dictionaryByTranslatingAERecord:(id)a0 toType:(id)a1 inSuite:(id)a2;
+ (id)_numberByTranslatingNumericDescriptor:(id)a0 toType:(id)a1 inSuite:(id)a2;
+ (id)_propertyContainerClassDescriptionFromDictionaryType:(id)a0 inSuite:(id)a1;
+ (id)_stringByTranslatingAliasDescriptor:(id)a0 toType:(id)a1 inSuite:(id)a2;
+ (id)_stringByTranslatingFSSpecDescriptor:(id)a0 toType:(id)a1 inSuite:(id)a2;
+ (id)_stringByTranslatingTextDescriptor:(id)a0 toType:(id)a1 inSuite:(id)a2;
+ (id)_valueByTranslatingOSAErrorRangeDescriptor:(id)a0 toType:(id)a1 inSuite:(id)a2;
+ (id)sharedAEDescriptorTranslator;

- (void)dealloc;
- (id)init;
- (void)_setUpFoundationTranslations;
- (id)descriptorByTranslatingObject:(id)a0 ofType:(id)a1 inSuite:(id)a2;
- (id)objectByTranslatingDescriptor:(id)a0 toType:(id)a1 inSuite:(id)a2;
- (void)registerTranslator:(id)a0 selector:(SEL)a1 toTranslateFromClass:(Class)a2;
- (void)registerTranslator:(id)a0 selector:(SEL)a1 toTranslateFromDescriptorType:(unsigned int)a2;

@end
