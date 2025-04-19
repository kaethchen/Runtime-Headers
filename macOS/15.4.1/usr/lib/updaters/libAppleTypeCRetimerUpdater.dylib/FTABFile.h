@class NSData, NSString, NSArray, NSURL, NSFileHandle, FTABSubfile, NSMutableArray, NSMutableData;

@interface FTABFile : NSObject <NSCopying> {
    NSData *_fileData;
    NSMutableArray *_subFileArray;
    NSFileHandle *_fileHandleWriteDestination;
    NSMutableData *_dataWriteDestination;
}

@property (readonly) NSString *bverString;
@property (readonly) const char *filePointer;
@property (readonly) unsigned long long fileLength;
@property (readonly) NSURL *url;
@property (readonly) unsigned int generation;
@property (readonly) unsigned int valid;
@property (readonly) NSData *bootNonce;
@property (readonly) NSData *magic;
@property (readonly) FTABSubfile *manifest;
@property (readonly) NSArray *subfiles;

+ (id)longTagName:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0;
- (id)initWithData:(id)a0;
- (void)setManifest:(id)a0;
- (BOOL)writeToURL:(id)a0;
- (id)subfileWithTag:(id)a0;
- (BOOL)addSubfileWithTagName:(id)a0 contentsOfURL:(id)a1;
- (BOOL)addSubfileWithTagName:(id)a0 subfileData:(id)a1;
- (void)addSubfiles:(id)a0;
- (void)configureDataWriteDestination;
- (BOOL)configureFileHandleWriteDestinationForURL:(id)a0;
- (id)createFileHandleForWritingToURL:(id)a0;
- (BOOL)fileValidForOffset:(unsigned int)a0 length:(unsigned int)a1;
- (BOOL)initFile;
- (BOOL)parseFileData;
- (void)removeSubfileWithTag:(id)a0;
- (void)setBootNonce:(id)a0;
- (BOOL)writeBytes:(const void *)a0 length:(unsigned long long)a1;
- (BOOL)writeBytes:(const void *)a0 length:(unsigned long long)a1 handle:(id)a2;
- (BOOL)writeSubfileToURL:(id)a0 tag:(id)a1;
- (id)writeToData;
- (BOOL)writeToDestination;

@end
