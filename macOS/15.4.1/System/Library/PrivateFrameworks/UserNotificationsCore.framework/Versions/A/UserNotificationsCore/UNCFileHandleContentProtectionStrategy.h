@class NSString, NSMutableDictionary;

@interface UNCFileHandleContentProtectionStrategy : NSObject <UNSContentProtectionStrategy> {
    BOOL _excludeFromBackup;
    NSString *_fileProtectionType;
    NSMutableDictionary *_keyedFileHandles;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)removeItemAtPath:(id)a0 error:(id *)a1;
- (id)allPaths;
- (BOOL)_isFileProtectionTypeSupported:(id)a0;
- (void)_excludeItemFromBackupAtPath:(id)a0;
- (id)_fileHandleForCreatingStoreAtPath:(id)a0 protectionType:(id)a1;
- (id)allDataAtPath:(id)a0;
- (id)dataAtPath:(id)a0;
- (BOOL)dataIsAvailableAtPath:(id)a0;
- (id)initWithFileProtectionType:(id)a0 excludeFromBackup:(BOOL)a1;
- (void)migrateDataAtPath:(id)a0 toPath:(id)a1;
- (BOOL)removeAllDataAtPath:(id)a0 error:(id *)a1;
- (BOOL)writeData:(id)a0 atPath:(id)a1 error:(id *)a2;

@end
