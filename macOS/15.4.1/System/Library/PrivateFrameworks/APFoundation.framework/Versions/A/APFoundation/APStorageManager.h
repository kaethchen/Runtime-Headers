@class NSString, NSFileManager;

@interface APStorageManager : NSObject <APDataStorable, APObjectStorable>

@property (retain, nonatomic) NSString *pathPrefix;
@property (retain, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) NSString *rootPath;

+ (void)setRootPath:(id)a0;
+ (id)_applicationSupportSubdirectory:(id)a0;
+ (BOOL)_removeStorageForSubdirectory:(id)a0;
+ (id)_rootSubdirectory;
+ (id)_validatedPath:(id)a0 error:(id *)a1;
+ (BOOL)areThereStoredItems;
+ (void)cleanupOldStorage;
+ (BOOL)removeStorage;
+ (void)sendAnalyticError:(id)a0 domain:(id)a1 code:(long long)a2;

- (id)init;
- (void).cxx_destruct;
- (id)contentsOfDirectoryAtPath:(id)a0 error:(id *)a1;
- (BOOL)moveItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (id)subpathsOfDirectoryAtPath:(id)a0 error:(id *)a1;
- (BOOL)fileExistsAtPath:(id)a0 error:(id *)a1;
- (BOOL)_createDirectoriesForURL:(id)a0 error:(id *)a1;
- (id)_validatedFullURLForPath:(id)a0 error:(id *)a1;
- (id)createdDateForFileAtPath:(id)a0 error:(id *)a1;
- (id /* block */)iterateObjectsIncludingFolders:(BOOL)a0;
- (Class)_classForEncryptedFile;
- (BOOL)_fileExistsAtPath:(id)a0 isDirectory:(BOOL *)a1 error:(id *)a2;
- (void)_initWithPathPrefix:(id)a0 rootPath:(id)a1;
- (void)_initWithSubdirectory:(id)a0;
- (id)_makeApplicationSupportSubdirectory:(id)a0;
- (id)_rootURL;
- (id)_validatedFullPathForPath:(id)a0 error:(id *)a1;
- (id)_validatedPath:(id)a0 error:(id *)a1;
- (id)addedToDirectoryDateForFileAtPath:(id)a0 error:(id *)a1;
- (id)dataStoredAtPath:(id)a0 error:(id *)a1;
- (void)dfsWithStartPath:(id)a0 nodeCallback:(id /* block */)a1;
- (BOOL)directoryExistsAtPath:(id)a0 error:(id *)a1;
- (id)fileAtKeyPath:(id)a0 forMode:(long long)a1 error:(id *)a2;
- (id)fileForAppendingAtKeyPath:(id)a0 error:(id *)a1;
- (id)fileForReadingAtKeyPath:(id)a0 error:(id *)a1;
- (id)fileForWritingAtKeyPath:(id)a0 error:(id *)a1;
- (void)getStorageSize:(unsigned long long *)a0 allocatedSize:(unsigned long long *)a1 files:(unsigned long long *)a2;
- (id)initWithPathPrefix:(id)a0;
- (id)initWithPathPrefix:(id)a0 rootPath:(id)a1;
- (id)lastModifiedDateForFileAtPath:(id)a0 error:(id *)a1;
- (id)objectStoredAtPath:(id)a0 error:(id *)a1;
- (BOOL)removeObjectAtPath:(id)a0 error:(id *)a1;
- (BOOL)storeData:(id)a0 atPath:(id)a1 error:(id *)a2;
- (BOOL)storeObject:(id)a0 atPath:(id)a1 error:(id *)a2;
- (BOOL)touchFileAtPath:(id)a0 error:(id *)a1;

@end
