@interface DRFSObject : NSObject {
    void *_ref;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (void)setupBindings;

- (void)dealloc;
- (id)init;
- (void)willChangeValueForKey:(id)a0;
- (id)parent;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (BOOL)validateValue:(id *)a0 forKey:(id)a1 error:(id *)a2;
- (id)sourcePath;
- (BOOL)isVirtual;
- (void)setParent:(id)a0;
- (id)HFSPlusProperties;
- (id)UDFProperties;
- (id)ISO9660Properties;
- (struct DRFSContentObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; unsigned int x7; struct __CFString *x8; struct __CFDictionary *x9; struct __CFDictionary *x10; struct __CFDictionary *x11; struct MinimalFSRef *x12; struct DRFolderObject *x13; unsigned int x14; struct DRFSIDList { void *x0; void *x1; void *x2; void *x3; } x15; } *)_obj;
- (id)allFilesystemsProperties;
- (id)baseName;
- (unsigned int)effectiveFilesystemMask;
- (unsigned int)explicitFilesystemMask;
- (id)jolietProperties;
- (id)mangledNameForFileSystem:(id)a0;
- (id)mangledNameForFilesystem:(id)a0;
- (id)mangledNames;
- (id)propertiesForFilesystem:(id)a0 mergeWithOtherFilesystems:(BOOL)a1;
- (id)propertyForKey:(id)a0 inFilesystem:(id)a1 mergeWithOtherFilesystems:(BOOL)a2;
- (void)setBaseName:(id)a0;
- (void)setEffectiveFilesystemMask:(unsigned int)a0;
- (void)setExplicitFilesystemMask:(unsigned int)a0;
- (void)setMangledNames:(id)a0;
- (void)setProperties:(id)a0 inFilesystem:(id)a1;
- (void)setProperty:(id)a0 forKey:(id)a1 inFilesystem:(id)a2;
- (void)setSourcePath:(id)a0;
- (void)setSpecificName:(id)a0 forFilesystem:(id)a1;
- (void)setSpecificNames:(id)a0;
- (void)setSpecifiedHFSPlusName:(id)a0;
- (void)setSpecifiedISO9660Level1Name:(id)a0;
- (void)setSpecifiedISO9660Level2Name:(id)a0;
- (void)setSpecifiedJolietName:(id)a0;
- (void)setSpecifiedUDFName:(id)a0;
- (void)setVirtual:(BOOL)a0;
- (id)specificNameForFilesystem:(id)a0;
- (id)specificNames;
- (id)specifiedHFSPlusName;
- (id)specifiedISO9660Level1Name;
- (id)specifiedISO9660Level2Name;
- (id)specifiedJolietName;
- (id)specifiedUDFName;

@end
