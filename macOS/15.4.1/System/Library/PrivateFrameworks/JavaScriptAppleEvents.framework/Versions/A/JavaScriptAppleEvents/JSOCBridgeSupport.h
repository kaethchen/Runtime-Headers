@class NSMutableDictionary, NSDictionary, NSMutableSet, NSMutableArray, JSExportNames;

@interface JSOCBridgeSupport : NSObject {
    NSMutableDictionary *_dictionary;
    NSMutableArray *_caches;
    NSMutableSet *_loadPaths;
}

@property (readonly) NSDictionary *metadata;
@property (readonly) JSExportNames *exportNames;

- (id)init;
- (void).cxx_destruct;
- (id)typeForName:(id)a0;
- (BOOL)import:(id)a0;
- (id)typeForObjCType:(const char *)a0;
- (void)addBridgeSupportCache:(id)a0;
- (void)addLoadPath:(id)a0;
- (Class)classWithName:(id)a0;
- (BOOL)didLoadPath:(id)a0;
- (id)extendedObjCTypeForObjCType:(id)a0;
- (id)functionPointerForFunctionWithName:(id)a0;
- (id)functionPointerForTarget:(id)a0 selector:(SEL)a1 superclassDepth:(unsigned long long)a2;
- (BOOL)hasClass:(id)a0;
- (BOOL)hasConstant:(id)a0;
- (BOOL)hasEnum:(id)a0;
- (BOOL)hasFunction:(id)a0;
- (BOOL)hasStringConstant:(id)a0;
- (BOOL)hasStruct:(id)a0;
- (id)infoForClassWithName:(id)a0;
- (id)infoForConstantWithName:(id)a0;
- (id)infoForEnumWithName:(id)a0;
- (id)infoForFunctionWithName:(id)a0;
- (id)infoForStringConstantWithName:(id)a0;
- (id)infoForStructWithName:(id)a0;
- (id)infoForStructWithTag:(id)a0;
- (BOOL)isTollFreeBridgedCFType:(id)a0;
- (id)objCTypeForStructName:(id)a0;
- (id)pointerForConstantWithName:(id)a0;
- (id)typeForArgumentInfo:(id)a0 fallbackObjCType:(const char *)a1;
- (id)typeForClass:(Class)a0 selector:(SEL)a1;
- (id)typeForFunctionInfo:(id)a0 isBlock:(BOOL)a1;
- (id)typeForMethodSignature:(id)a0;
- (id)typeForSelectorInfo:(id)a0 typeEncoding:(const char *)a1;
- (id)valueForEnumWithName:(id)a0;
- (id)valueForStringConstantWithName:(id)a0 isNSString:(BOOL *)a1;

@end
