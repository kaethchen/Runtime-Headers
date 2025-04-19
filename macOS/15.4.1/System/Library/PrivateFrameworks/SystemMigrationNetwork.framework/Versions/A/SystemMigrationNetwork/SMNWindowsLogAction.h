@class NSString;

@interface SMNWindowsLogAction : SMNAction

@property (retain) NSString *tempDirectory;

+ (int)actionID;
+ (BOOL)streamsResults;

- (void).cxx_destruct;
- (id)requestPayload;
- (BOOL)expectsAResult;
- (BOOL)receiveResultOnFd:(int)a0 errorIsFatal:(BOOL *)a1;
- (void)finishedFile:(id)a0 length:(unsigned long long)a1;
- (void)updatedFile:(id)a0 partialLength:(unsigned long long)a1;

@end
