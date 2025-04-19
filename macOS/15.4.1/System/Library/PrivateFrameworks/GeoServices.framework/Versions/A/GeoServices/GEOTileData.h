@class NSString, NSData, NSURL, NSFileHandle;

@interface GEOTileData : NSObject <GEOXPCSerializable> {
    NSData *_data;
    NSFileHandle *_fileHandle;
    int _fileDescriptor;
    unsigned long long _cachedFileSize;
    BOOL _isDir;
    long long _sandboxExtension;
}

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) id decodedRepresentation;
@property (readonly, nonatomic) BOOL hasFileDescriptor;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithFileURL:(id)a0;
- (void)_replaceFileURL:(id)a0;
- (int)consumeFileDescriptor;
- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithDecodedRepresentation:(id)a0;
- (id)initWithFileHandle:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (id)readDataWithError:(id *)a0;
- (id)readDataWithOptions:(unsigned long long)a0 error:(id *)a1;

@end
