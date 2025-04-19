@class NSTask, NSString, NSFileHandle;

@interface SMTask : NSObject

@property int terminationStatus;
@property (retain) NSFileHandle *outputFileHandle;
@property (retain) NSTask *task;
@property (retain) NSString *logPrefix;

+ (id)sipSanitizedTaskFromTask:(id)a0;

- (BOOL)run;
- (void).cxx_destruct;
- (id)initWithTask:(id)a0;
- (id)initWithTask:(id)a0 allowSIP:(BOOL)a1;
- (void)fileHandleReadCompleted:(id)a0;
- (void)processOutput:(id)a0;
- (void)processRemainingData;

@end
