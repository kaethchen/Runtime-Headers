@class NSData, NSString, NSDate;

@interface NSPageData : NSData {
    NSData *data;
    NSDate *_originalFileModDate;
    NSString *_originalFilePath;
}

+ (void)initialize;
+ (long long)_umask;

- (void)dealloc;
- (id)init;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;
- (const void *)bytes;
- (id)data;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithData:(id)a0;
- (id)_mappedFile;
- (void)_setOriginalFileInfoFromFileAttributes:(id)a0;
- (id)deserializer;
- (id)initFromSerializerStream:(id)a0 length:(unsigned long long)a1;
- (id)initWithContentsOfMappedFile:(id)a0;
- (id)initWithContentsOfMappedFile:(id)a0 withFileAttributes:(id)a1;
- (id)initWithDataNoCopy:(id)a0;
- (unsigned long long)writeFd:(long long)a0;
- (unsigned long long)writeFile:(id)a0;
- (unsigned long long)writePath:(id)a0 docInfo:(id)a1 errorHandler:(id)a2 remapContents:(BOOL)a3 hardLinkPath:(id)a4;

@end
