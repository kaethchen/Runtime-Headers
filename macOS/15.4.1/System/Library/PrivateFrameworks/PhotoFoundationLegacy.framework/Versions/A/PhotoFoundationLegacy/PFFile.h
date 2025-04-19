@class NSURL, NSString, NSDate;

@interface PFFile : NSObject <PFFile, NSCopying> {
    NSString *_uti;
    struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *_fileInfo;
    NSString *_cachedPath;
}

@property (readonly, nonatomic) unsigned long long pathHash;
@property (readonly) NSURL *url;
@property (readonly) NSString *path;
@property (readonly) NSString *fileName;
@property (readonly) unsigned long long fileSize;
@property (readonly) NSDate *fileCreationDate;
@property (readonly) NSDate *fileModificationDate;
@property (readonly) NSString *fileExtension;
@property (readonly) BOOL isDirectory;
@property (readonly) NSString *UTI;

+ (id)fileAttributesAtPath:(id)a0 traverseLink:(BOOL)a1;
+ (BOOL)directoryExists:(id)a0;
+ (id)fileWithPath:(id)a0;
+ (BOOL)fileExists:(id)a0;
+ (BOOL)pathExists:(id)a0;
+ (int)disableOSCachingForURL:(id)a0;
+ (void)reenableOSCachingForFileDescriptor:(int)a0;
+ (id)assetType:(id)a0;
+ (BOOL)createEmptyFileAtURL:(id)a0;
+ (id)createEmptyTempFileInBaseDirectory:(id)a0 withSubDirectoryNamed:(id)a1 filenamePrefix:(id)a2 pathExtension:(id)a3 error:(id *)a4;
+ (id)createEmptyTempFileInDirectoryNamed:(id)a0 filenamePrefix:(id)a1 pathExtension:(id)a2 error:(id *)a3;
+ (id)fileAttributesAtPath:(id)a0 traverseLink:(BOOL)a1 fixCreationDate:(BOOL)a2;
+ (id)fileWithURL:(id)a0;
+ (id)pathByTidyingExtensionInPath:(id)a0 withExtension:(id)a1;
+ (id)realPathFromFileAlias:(id)a0;
+ (id)resourceIdentifierForURL:(id)a0;
+ (long long)sizeOf:(id)a0 includeSubFolders:(BOOL)a1;
+ (id)uniqueFileSystemNameForName:(id)a0 inDirectory:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)lock;
- (void)unlock;
- (const char *)fileSystemRepresentation;
- (BOOL)isInTrash;
- (long long)size;
- (id)attributes;
- (BOOL)tryLock;
- (int)fileType;
- (id)initWithPath:(id)a0;
- (id)modificationDate;
- (id)extension;
- (id)creationDate;
- (id)volume;
- (BOOL)isFile;
- (id)assetType;
- (BOOL)exists;
- (id)directoryEnumerator;
- (void)setLabelNumber:(id)a0;
- (id)labelNumber;
- (BOOL)pathExists;
- (BOOL)isSymLink;
- (id)newFileIOStream;
- (const struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *)cachedStat;
- (id)fileByResolvingFileAlias;
- (id)fileComponent;
- (id)folderPath;
- (long long)folderSize_recursive:(BOOL)a0;
- (BOOL)isEqualToFile:(id)a0;
- (BOOL)isFileAlias;
- (BOOL)isLockedInFinder;
- (BOOL)isXMPType;
- (id)lockInFinder;
- (void)logFileAccess;
- (id)newFileByAppendingPathComponent:(id)a0;
- (id)newFileIStream;
- (unsigned short)posixPermissions;
- (void)uncacheStat;
- (id)unlockInFinder;

@end
