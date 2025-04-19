@interface _ICDDirectoryObject : ICDBaseObjectImp

- (void)dealloc;
- (int)count;
- (BOOL)addChild:(id)a0;
- (id)children;
- (void)dump;
- (void)removeChild:(id)a0;
- (void)createChildren:(int)a0;
- (void)addObjectInfoForData:(id)a0;
- (void)addObjectInfoForTree:(id)a0;
- (void)addObjectNameExtension:(id)a0;
- (void)buildStandardProperties:(struct ICD_BulkNewPropertyPB { struct ICDHeader { short x0; unsigned long long x1; } x0; unsigned int x1; struct BulkNewPropertyData { unsigned int x0; struct ICAPropertyInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; unsigned int x2; } x2[1]; } *)a0 index:(unsigned int *)a1;
- (void)callBulkNewObject;
- (void)callCleanup;
- (void)countItems:(unsigned int *)a0;
- (void)createAllICAProperties;
- (id)findObject:(unsigned int)a0;
- (id)getObjectPropertyDictionary:(id)a0;
- (void)handleStoreAdded;
- (void)invalidateMetaData;
- (short)newObjectCreated:(void *)a0 completion:(void /* function */ *)a1 index:(unsigned int)a2 icaObject:(unsigned int *)a3;
- (void)removeFromTree;

@end
