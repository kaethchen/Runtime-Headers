@interface DRFolder : DRFSObject

+ (void)initialize;
+ (id)folderWithPath:(id)a0;
+ (id)virtualFolderWithName:(id)a0;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_cfTypeID;
- (unsigned long long)count;
- (id)initWithName:(id)a0;
- (void)insertObject:(id)a0 inChildrenAtIndex:(unsigned int)a1;
- (void)addChild:(id)a0;
- (id)children;
- (id)initWithPath:(id)a0;
- (void)removeObjectFromChildrenAtIndex:(unsigned int)a0;
- (void)removeChild:(id)a0;
- (struct DRFolderObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; unsigned int x7; struct __CFString *x8; struct __CFDictionary *x9; struct __CFDictionary *x10; struct __CFDictionary *x11; struct MinimalFSRef *x12; struct DRFolderObject *x13; unsigned int x14; struct DRFSIDList { void *x0; void *x1; void *x2; void *x3; } x15; struct __CFArray *x16; } *)_obj;
- (id)initWithFSRef:(const struct FSRef { unsigned char x0[80]; } *)a0;
- (void)makeVirtual;

@end
