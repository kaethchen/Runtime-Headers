@class NSArray, NSDictionary, NSURL, NSData;

@interface NSTask : NSObject

@property (copy) NSURL *executableURL;
@property (copy) NSArray *arguments;
@property (copy) NSDictionary *environment;
@property (copy) NSURL *currentDirectoryURL;
@property (copy) NSData *launchRequirementData;
@property (retain) id standardInput;
@property (retain) id standardOutput;
@property (retain) id standardError;
@property (readonly) int processIdentifier;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly) int terminationStatus;
@property (readonly) long long terminationReason;
@property (copy) id /* block */ terminationHandler;
@property long long qualityOfService;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)currentTaskDictionary;
+ (id)launchedTaskWithDictionary:(id)a0;
+ (id)launchedTaskWithExecutableURL:(id)a0 arguments:(id)a1 error:(out id *)a2 terminationHandler:(id /* block */)a3;
+ (id)launchedTaskWithLaunchPath:(id)a0 arguments:(id)a1;

- (id)init;
- (BOOL)resume;
- (BOOL)suspend;
- (id)currentDirectoryPath;
- (void)interrupt;
- (BOOL)isSpawnedProcessDisclaimed;
- (void)launch;
- (BOOL)launchAndReturnError:(id *)a0;
- (id)launchPath;
- (void)setCurrentDirectoryPath:(id)a0;
- (void)setLaunchPath:(id)a0;
- (void)setSpawnedProcessDisclaimed:(BOOL)a0;
- (long long)suspendCount;
- (void)terminate;

@end
