@class NSMutableDictionary, VMUClassInfoMap, NSMapTable, VMURangeArray, NSDictionary, VMUTask, VMUClassInfo, NSHashTable, NSMutableSet, VMUTaskMemoryScanner, VMUObjectIdentifierDriverKitSupport, VMUSwiftRuntimeInfo;

@interface VMUObjectIdentifier : NSObject {
    VMUTask *_task;
    struct _VMUSwiftRemoteMirrorReaderContext { struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } symbolicator; id /* block */ memoryReader; NSMapTable *remoteAddressToLocalAddressAndSizeMap; NSMapTable *remoteStringToLengthMap; BOOL needToValidateAddressRange; int swiftRemoteMirrorMemoryReadsLogLevel; unsigned int readBytesCallCount; unsigned int getStringLengthCallCount; VMUObjectIdentifier *objectIdentifier; VMUTaskMemoryScanner *scanner; } _swiftMirrorReaderContext;
    BOOL _debugSwiftRemoteMirror;
    VMUClassInfoMap *_unrealizedClassInfos;
    VMUClassInfoMap *_cfTypeIDToClassInfo;
    VMUClassInfoMap *_coreMediaFigBaseClassToClassInfo;
    NSMutableDictionary *_nonobjectClassInfosDict;
    id *_objCClassStructureClassInfos;
    unsigned int *_objCClassStructureClassInfoIndexes;
    unsigned long long _coreFoundationCFTypeIsa;
    unsigned long long _objCClassCount;
    unsigned long long _swiftClassCount;
    unsigned long long _cfClassCount;
    id /* block */ _isaTranslator;
    BOOL _fragileNonPointerIsas;
    unsigned long long _lastClassInfoForMemoryIsa;
    VMUClassInfo *_lastClassInfoForMemoryClassInfo;
    NSHashTable *_nonObjectIsaHash;
    NSMapTable *_isaToObjectLabelHandlerMap;
    NSMapTable *_itemCountToLabelStringUniquingMap;
    id *_labelStringUniquingMaps;
    id *_stringTypeDescriptions;
    NSMutableSet *_stringUniquingSet;
    NSMutableDictionary *_pidToProcessNameDict;
    BOOL _targetProcessContainsMallocStackLoggingLiteZone;
    unsigned long long _cfBooleanTrueAddress;
    unsigned long long _cfBooleanFalseAddress;
    unsigned long long _objcEmptyCacheAddress;
    unsigned int _osDispatchMachOffsetInOSXPCConnection;
    unsigned long long _taggedPointerObfuscator;
    unsigned char _taggedPointerPermutations[8];
    VMUObjectIdentifierDriverKitSupport *_driverKitSupport;
    NSDictionary *_swiftValueInAttributeGraphAddressesToTypeMetadata;
    NSMutableDictionary *_attributeGraphSwiftMetadataToClassInfo;
}

@property (readonly, nonatomic) struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } libobjcSymbolOwner;
@property (readonly, nonatomic) VMUSwiftRuntimeInfo *swiftRuntimeInfoStableABI;
@property (readonly, nonatomic) VMUSwiftRuntimeInfo *swiftRuntimeInfoPreABI;
@property (readonly, nonatomic) struct libSwiftRemoteMirrorWrapper { struct _DummyVMUSwiftReflectionContext *x0; unsigned long long x1; unsigned long long x2; } *swiftMirror;
@property (readonly) BOOL hasSwiftContent;
@property (readonly) BOOL hasSwiftReflection;
@property (readonly, weak) VMUTaskMemoryScanner *scanner;
@property (readonly) unsigned int objcABI;
@property (readonly) NSMutableDictionary *moduleNameToBinaryPathDict;
@property (readonly) unsigned long long figBaseObjectFinalizeAddress;
@property (readonly, nonatomic) unsigned long long swiftConcurrencyDebugAsyncTaskMetadataIsa;
@property (readonly, nonatomic) unsigned long long swiftConcurrencyDebugAsyncTaskSlabMetadataIsa;
@property (readonly) unsigned int task;
@property (readonly, nonatomic) BOOL taskIsDriverKit;
@property (readonly, nonatomic) id /* block */ memoryReader;
@property (readonly, nonatomic) VMUClassInfoMap *realizedClasses;
@property (readonly, nonatomic) unsigned long long taggedPointerMask;
@property (readonly, nonatomic) struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } symbolicator;
@property (nonatomic) unsigned int objectContentLevel;
@property (retain, nonatomic) VMURangeArray *readonlyRegionRanges;
@property (nonatomic) struct _VMURange { unsigned long long location; unsigned long long length; } validVMRange;
@property (readonly, nonatomic) struct VMUAutoreleasePoolPageLayout { unsigned int x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } *autoreleasePoolPageLayout;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTask:(unsigned int)a0;
- (unsigned long long)SwiftClassCount;
- (id)vmuTask;
- (unsigned long long)CFTypeCount;
- (unsigned long long)ObjCclassCount;
- (void)buildIsaToObjectLabelHandlerMap;
- (struct VMUAutoreleasePoolPageLayout { unsigned int x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } *)createAutoreleasePoolPageLayout;
- (id)_classInfoForMemory:(void *)a0 length:(unsigned long long)a1 atOffset:(unsigned long long)a2 remoteAddress:(unsigned long long)a3;
- (id)_classInfoWithPthreadType:(id)a0;
- (void)_faultClass:(unsigned long long)a0 ofType:(unsigned int)a1;
- (void)_findObjCAndSwiftClassesFromClass:(unsigned long long)a0 recursionDepth:(unsigned int)a1;
- (void)_findOffsetsInOSXPCConnection:(void *)a0 length:(unsigned long long)a1;
- (void)_generateClassInfosForObjCClassStructurePointerTypes;
- (BOOL)_isUnrealizedObjCClass:(unsigned long long)a0 recursionDepth:(unsigned int)a1;
- (BOOL)_isValidInstanceLength:(unsigned long long)a0 expectedLength:(unsigned long long)a1;
- (BOOL)_isaPointerRefersToVTable:(unsigned long long)a0 remoteAddress:(unsigned long long)a1 symbol:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a2 symbolNameOut:(const char **)a3;
- (void)_loadSwiftAsyncTaskAndSlabRecognitionInfo;
- (void)_populateSwiftABIVariables;
- (int)_populateSwiftReflectionInfo:(struct _DummyVMUSwiftReflectionContext { } *)a0;
- (BOOL)_remoteAddressIsOKtoRead:(unsigned long long)a0;
- (id)_returnFaultedClass:(unsigned long long)a0 ofType:(unsigned int)a1;
- (id)_scanner;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })_symbolicator;
- (unsigned long long)addressOfSymbol:(const char *)a0 inLibrary:(const char *)a1;
- (id)classInfoForCFTypeInstance:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)classInfoForMemory:(void *)a0 length:(unsigned long long)a1;
- (id)classInfoForMemory:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)classInfoForNonobjectMemory:(void *)a0 length:(unsigned long long)a1;
- (id)classInfoForObjCClassStructurePointerType:(unsigned int)a0;
- (id)classInfoForObjectWithRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned int)classInfoIndexForObjCClassStructurePointerType:(unsigned int)a0;
- (id)classInfoWithNonobjectType:(id)a0 binaryPath:(id)a1;
- (id)classInfoWithNonobjectType:(id)a0 binaryPath:(id)a1 returnedClassInfoIndex:(unsigned int *)a2;
- (id)classNameForTaggedPointer:(void *)a0;
- (unsigned long long)countFromPointerInAutoreleasePool:(void *)a0;
- (void)destroy_libSwiftRemoteMirror;
- (void)enumerateAllClassInfosWithBlock:(id /* block */)a0;
- (void)enumerateRealizedClassInfosWithBlock:(id /* block */)a0;
- (void)findCFTypes;
- (void)findCFTypes_version1;
- (void)findCFTypes_version2;
- (void)findFutureClasses;
- (void)findObjCAndSwiftClasses;
- (void)flushRemoteMirrorMemoryCache;
- (void)flushRemoteMirrorMemoryCacheEntryForAddress:(unsigned long long)a0;
- (id)formattedDateLabel:(id)a0;
- (id)initWithTask:(unsigned int)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithTask:(unsigned int)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1 scanner:(id)a2;
- (id)initWithVMUTask:(id)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1 scanner:(id)a2;
- (BOOL)isTaggedPointer:(void *)a0;
- (id)labelForCFBundle:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForCStructureWithMemory:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2 classInfo:(id)a3;
- (id)labelForClassDataExtRW:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForClassDataRO:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForClassDataRW:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForClassStructure:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForCoreMediaFigObject:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForItemCount:(long long)a0;
- (id)labelForMallocBlock:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (id)labelForMallocBlock:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0 usingHandlerBlock:(id /* block */)a1;
- (id)labelForMemory:(void *)a0 length:(unsigned long long)a1;
- (id)labelForMemory:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForMemory:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2 classInfo:(id)a3;
- (id)labelForNSArray:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSBundle:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSCFDictionary:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSCFSet:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSCFStringAtRemoteAddress:(unsigned long long)a0 printDetail:(BOOL)a1;
- (id)labelForNSConcreteAttributedString:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSConcreteData:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSConcreteHashTable:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSConcreteMutableData:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSData:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSDate:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSDictionary:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSInlineData:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSNumber:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSPathStore2:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSSet:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSString:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSString:(void *)a0 mappedSize:(unsigned long long)a1 remoteAddress:(unsigned long long)a2 printDetail:(BOOL)a3;
- (id)labelForNSTaggedPointerStringCStringContainer:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSURL:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSXPCConnection:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSXPCInterface:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForOSDispatchMach:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForOSDispatchQueue:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForOSLog:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForOSTransaction:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForOSXPCActivity:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForOSXPCConnection:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForOSXPCDictionary:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForOSXPCDictionaryStorageNode:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForOSXPCObject:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForOSXPCString:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForObjectOfClass:(id)a0 atOffset:(unsigned int)a1 ofObject:(void *)a2 withLength:(unsigned long long)a3;
- (id)labelForProtocol:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForSwiftContiguousArrayStorage:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForSwiftDictionaryStorage:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForSwiftSetStorage:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForSwiftStringStorage:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForTaggedPointer:(void *)a0;
- (id)labelFor_NSActivityAssertion:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelFor_RBSAssertionDescriptor:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelFor__NSMallocBlock__:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (void)loadSwiftReflectionLibraries;
- (void)locateSwiftValuesInAttributeGraph;
- (id)noLabelForOSXPCObject:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)osMajorMinorVersionString;
- (void)setupIsaTranslator;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })symbolForAddress:(unsigned long long)a0;
- (id)symbolForRemoteAddress:(unsigned long long)a0;
- (unsigned long long)translateIsaPointer:(unsigned long long)a0;
- (id)uniquifyStringLabel:(id)a0 stringType:(int)a1 printDetail:(BOOL)a2;

@end
