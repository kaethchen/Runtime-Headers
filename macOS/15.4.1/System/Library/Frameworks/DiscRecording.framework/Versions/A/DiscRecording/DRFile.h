@interface DRFile : DRFSObject

+ (void)initialize;
+ (id)symLinkPointingTo:(id)a0 inFilesystem:(id)a1;
+ (id)fileWithPath:(id)a0;
+ (id)finderAliasPointingTo:(id)a0 inFilesystem:(id)a1;
+ (id)hardLinkPointingTo:(id)a0 inFilesystem:(id)a1;
+ (id)virtualFileWithName:(id)a0 data:(id)a1;
+ (id)virtualFileWithName:(id)a0 dataProducer:(id)a1;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_cfTypeID;
- (id)initWithName:(id)a0 data:(id)a1;
- (id)initWithPath:(id)a0;
- (struct DRFileObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; unsigned int x7; struct __CFString *x8; struct __CFDictionary *x9; struct __CFDictionary *x10; struct __CFDictionary *x11; struct MinimalFSRef *x12; struct DRFolderObject *x13; unsigned int x14; struct DRFSIDList { void *x0; void *x1; void *x2; void *x3; } x15; void /* function */ *x16; void *x17; char *x18; char *x19; } *)_obj;
- (id)initWithFSRef:(const struct FSRef { unsigned char x0[80]; } *)a0;
- (id)initWithLinkType:(id)a0 pointingTo:(id)a1 inFilesystem:(id)a2;
- (id)initWithName:(id)a0 bytes:(void *)a1 length:(unsigned long long)a2;
- (id)initWithName:(id)a0 callback:(void /* function */ *)a1 refCon:(void *)a2;
- (id)initWithName:(id)a0 dataProducer:(id)a1;

@end
