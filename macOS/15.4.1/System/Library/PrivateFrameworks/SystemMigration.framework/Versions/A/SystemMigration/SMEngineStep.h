@class SMEngine, NSMutableArray;

@interface SMEngineStep : NSObject <SMCopyEngineDelegate>

@property (retain) NSMutableArray *warnings;
@property (retain) NSMutableArray *errors;
@property unsigned long long totalSize;
@property unsigned long long totalFileCount;
@property unsigned long long deletedSize;
@property unsigned long long completedSize;
@property unsigned long long completedFileCount;
@property (weak) SMEngine *engine;
@property unsigned long long lastCompletedPhase;

+ (unsigned long long)finalSizeAndCount:(unsigned long long *)a0 withFileGroupings:(id)a1 withUsersToTransfer:(id)a2;
+ (id)findStepOfClass:(Class)a0 inSteps:(id)a1;

- (void).cxx_destruct;
- (void)cancel;
- (id)process;
- (id)prepare;
- (id)initWithEngine:(id)a0;
- (id)warningWithMessage:(id)a0;
- (id)progressForKey:(id)a0;
- (void)addProgress:(id)a0 forKey:(id)a1;
- (void)copyFailedToCopyFile:(id)a0 shouldReportError:(BOOL)a1;
- (BOOL)engineStepSupportsResumption;
- (id)errorWithMessage:(id)a0 code:(long long)a1;
- (id)errorWithMessage:(id)a0 code:(long long)a1 underlyingError:(id)a2;
- (id)fatalErrorWithMessage:(id)a0;
- (id)fatalErrorWithMessage:(id)a0 underlyingError:(id)a1;
- (BOOL)hasProgressForKey:(id)a0;
- (id)postProcess;
- (id)progressArrayForKey:(id)a0;
- (void)progressCompletedForKey:(id)a0;
- (id)progressDictionaryForKey:(id)a0;
- (id)resumeProcess;
- (void)setProgress:(id)a0 forKey:(id)a1;
- (id)warningWithMessage:(id)a0 underlyingError:(id)a1;

@end
