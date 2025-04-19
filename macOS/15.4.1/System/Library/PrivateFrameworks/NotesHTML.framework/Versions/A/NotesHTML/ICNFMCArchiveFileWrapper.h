@class NSData, NSFileWrapper;

@interface ICNFMCArchiveFileWrapper : NSFileWrapper {
    NSFileWrapper *_realFileWrapper;
}

@property (retain, nonatomic) NSData *archiveData;
@property (nonatomic) long long archiveType;
@property (readonly, nonatomic) NSFileWrapper *realFileWrapper;

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
- (unsigned long long)approximateSize;
- (id)initWithData:(id)a0 archiveType:(long long)a1;
- (void)_archiveFileWrapperCommonInit;
- (void)getCompressedData:(id *)a0 archiveType:(long long *)a1;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1 compressionLevel:(long long)a2 error:(id *)a3;

@end
