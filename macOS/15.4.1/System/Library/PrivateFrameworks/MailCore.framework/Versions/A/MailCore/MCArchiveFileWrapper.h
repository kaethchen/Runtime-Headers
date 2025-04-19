@class NSProgress, NSData, NSURL, NSObject, MCFileWrapper;
@protocol OS_os_log;

@interface MCArchiveFileWrapper : MCFileWrapper {
    MCFileWrapper *_realFileWrapper;
    NSURL *_temporaryDirectory;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSData *archiveData;
@property (readonly, nonatomic) long long archiveType;
@property (readonly, nonatomic) MCFileWrapper *realFileWrapper;
@property (readonly, nonatomic) NSURL *compressedFileURL;
@property (nonatomic) unsigned long long approximateSize;
@property (retain, nonatomic) NSProgress *overallProgress;
@property (retain, nonatomic) NSProgress *fileProgress;

+ (BOOL)supportsSecureCoding;
+ (id)workingDirectory;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isDirectory;
- (BOOL)isRegularFile;
- (BOOL)isSymbolicLink;
- (id)addFileWrapper:(id)a0;
- (id)addRegularFileWithContents:(id)a0 preferredFilename:(id)a1;
- (id)fileWrappers;
- (id)initDirectoryWithFileWrappers:(id)a0;
- (id)initRegularFileWithContents:(id)a0;
- (id)initSymbolicLinkWithDestinationURL:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)keyForFileWrapper:(id)a0;
- (id)preferredFilename;
- (void)removeFileWrapper:(id)a0;
- (id)serializedRepresentation;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 originalContentsURL:(id)a2 error:(id *)a3;
- (void)getCompressedData:(id *)a0 compressedFileURL:(id *)a1 archiveType:(long long *)a2;
- (id)initWithData:(id)a0 archiveType:(long long)a1;
- (id)initWithURL:(id)a0 compressionLevel:(long long)a1 error:(id *)a2;
- (void)_cleanupTemporaryDirectory;
- (id)_temporaryDirectoryURL;
- (unsigned long long)approximateSizeAllowingDiskIO:(BOOL)a0;

@end
