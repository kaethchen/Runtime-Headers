@class NSString, HTTPConnection;

@interface HTTPFileResponse : NSObject <HTTPResponse> {
    HTTPConnection *connection;
    NSString *filePath;
    unsigned long long fileLength;
    unsigned long long fileOffset;
    BOOL aborted;
    int fileFD;
    void *buffer;
    unsigned long long bufferSize;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)filePath;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)a0;
- (id)readDataOfLength:(unsigned long long)a0;
- (void)abort;
- (BOOL)isDone;
- (unsigned long long)contentLength;
- (id)initWithFilePath:(id)a0 forConnection:(id)a1;
- (BOOL)openFile;
- (BOOL)openFileIfNeeded;

@end
