@class NSString, NSURL;

@interface _NSFileManagerBridge : NSObject {
    void /* unknown type, empty encoding */ _impl;
}

@property (nonatomic, readonly) NSString *currentDirectoryPath;
@property (nonatomic, readonly) NSURL *homeDirectoryForCurrentUser;
@property (nonatomic, readonly) NSURL *temporaryDirectory;

- (id)init;
- (void).cxx_destruct;
- (id)contentsOfDirectoryAtPath:(id)a0 error:(id *)a1;
- (BOOL)createSymbolicLinkAtPath:(id)a0 withDestinationPath:(id)a1 error:(id *)a2;
- (id)destinationOfSymbolicLinkAtPath:(id)a0 error:(id *)a1;
- (BOOL)fileExistsAtPath:(id)a0;
- (BOOL)isExecutableFileAtPath:(id)a0;
- (BOOL)removeItemAtPath:(id)a0 error:(id *)a1;
- (BOOL)setAttributes:(id)a0 ofItemAtPath:(id)a1 error:(id *)a2;
- (id)stringWithFileSystemRepresentation:(const char *)a0 length:(long long)a1;
- (BOOL)createDirectoryAtPath:(id)a0 withIntermediateDirectories:(BOOL)a1 attributes:(id)a2 error:(id *)a3;
- (BOOL)createDirectoryAt:(id)a0 withIntermediateDirectories:(BOOL)a1 attributes:(id)a2 error:(id *)a3;
- (id)contentsAtPath:(id)a0;
- (id)attributesOfFileSystemForPath:(id)a0 error:(id *)a1;
- (id)attributesOfItemAtPath:(id)a0 error:(id *)a1;
- (BOOL)changeCurrentDirectoryPath:(id)a0;
- (BOOL)contentsEqualAtPath:(id)a0 andPath:(id)a1;
- (BOOL)copyItemAt:(id)a0 to:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)copyItemAtPath:(id)a0 toPath:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)createFileAtPath:(id)a0 contents:(id)a1 attributes:(id)a2;
- (BOOL)createSymbolicLinkAt:(id)a0 withDestinationURL:(id)a1 error:(id *)a2;
- (id)displayNameAtPath:(id)a0;
- (BOOL)fileExistsAtPath:(id)a0 isDirectory:(BOOL *)a1;
- (BOOL)getRelationship:(long long *)a0 of:(unsigned long long)a1 in:(unsigned long long)a2 toItemAt:(id)a3 error:(id *)a4;
- (BOOL)getRelationship:(long long *)a0 ofDirectoryAt:(id)a1 toItemAt:(id)a2 error:(id *)a3;
- (id)homeDirectoryForUser:(id)a0;
- (id)initWithFileManager:(id)a0;
- (BOOL)isDeletableFileAtPath:(id)a0;
- (BOOL)isReadableFileAtPath:(id)a0;
- (BOOL)isWritableFileAtPath:(id)a0;
- (BOOL)linkItemAt:(id)a0 to:(id)a1 error:(id *)a2;
- (BOOL)linkItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (BOOL)moveItemAt:(id)a0 to:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)moveItemAtPath:(id)a0 toPath:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)removeItemAt:(id)a0 error:(id *)a1;
- (id)subpathsOfDirectoryAtPath:(id)a0 error:(id *)a1;
- (id)urlFor:(unsigned long long)a0 in:(unsigned long long)a1 appropriateFor:(id)a2 create:(BOOL)a3 error:(id *)a4;
- (id)urlsFor:(unsigned long long)a0 in:(unsigned long long)a1;

@end
