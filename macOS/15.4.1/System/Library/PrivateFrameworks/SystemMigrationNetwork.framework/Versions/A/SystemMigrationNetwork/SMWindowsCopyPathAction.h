@class NSString, NSURL;
@protocol SMNWindowsCopyPathActionDelegate;

@interface SMWindowsCopyPathAction : SMNAction

@property (retain) NSString *sourcePath;
@property (retain) NSURL *destinationPath;
@property (retain) NSString *lastPathReceived;
@property id<SMNWindowsCopyPathActionDelegate> delegate;
@property (retain) NSString *expandedPath;

+ (int)actionID;
+ (BOOL)streamsResults;

- (void).cxx_destruct;
- (BOOL)shouldContinue;
- (id)initWithSourcePath:(id)a0 destinationPath:(id)a1;
- (id)requestPayload;
- (BOOL)expectsAResult;
- (BOOL)receiveResultOnFd:(int)a0 errorIsFatal:(BOOL *)a1;
- (void)finishedFile:(id)a0 length:(unsigned long long)a1;
- (id)localPathForFile:(id)a0;
- (void)updatedFile:(id)a0 partialLength:(unsigned long long)a1;

@end
