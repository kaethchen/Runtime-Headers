@class NSUUID, NSString, BMFileManager, NSNumber;

@interface BMFileBackedCounter : NSObject {
    NSString *_filePath;
    NSString *_lockFilePath;
    int _protectionClass;
    unsigned long long _domain;
    BMFileManager *_fileManager;
    NSNumber *_lastObservedCount;
}

@property (readonly, nonatomic) NSUUID *fileUUID;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)_atomicallyCreateFileWithDictionary:(id)a0 error:(id *)a1;
- (BOOL)_atomicallyWriteFileWithDictionary:(id)a0 error:(id *)a1;
- (id)_countFromFileDictionary:(id)a0;
- (id)_createFileIfNotExists:(id *)a0;
- (id)_decodeFileDictionary:(id)a0 error:(id *)a1;
- (id)_encodeFileDictionary:(id)a0 error:(id *)a1;
- (id)_fileUUIDFromFileDictionary:(id)a0;
- (id)_loadFileDictionary:(id *)a0;
- (id)_newFileDictionaryWithFileUUID:(id)a0 count:(id)a1 error:(id *)a2;
- (id)_readableFileDictionary:(id)a0;
- (BOOL)incrementCount:(id *)a0 error:(id *)a1;
- (id)initWithFilename:(id)a0 protectionClass:(int)a1 directory:(id)a2 domain:(unsigned long long)a3 error:(id *)a4;

@end
