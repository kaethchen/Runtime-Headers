@class ASBContainer;

@interface ASBContainerFileManager : NSFileManager

@property (readonly) ASBContainer *container;

+ (void)setAutoFixPermissionsErrors:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (id)URLForDirectory:(unsigned long long)a0 inDomain:(unsigned long long)a1 appropriateForURL:(id)a2 create:(BOOL)a3 error:(id *)a4;
- (id)URLsForDirectory:(unsigned long long)a0 inDomains:(unsigned long long)a1;
- (BOOL)copyItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)createSymbolicLinkAtPath:(id)a0 withDestinationPath:(id)a1 error:(id *)a2;
- (BOOL)removeItemAtPath:(id)a0 error:(id *)a1;
- (BOOL)removeItemAtURL:(id)a0 error:(id *)a1;
- (BOOL)setAttributes:(id)a0 ofItemAtPath:(id)a1 error:(id *)a2;
- (BOOL)createDirectoryAtPath:(id)a0 withIntermediateDirectories:(BOOL)a1 attributes:(id)a2 error:(id *)a3;
- (id)attributesOfItemAtPath:(id)a0 error:(id *)a1;
- (BOOL)copyItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (BOOL)linkItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (BOOL)linkItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)moveItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (BOOL)moveItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)initWithContainer:(id)a0;

@end
