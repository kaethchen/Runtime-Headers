@class NSDictionary, NSString, NSSet, NSFileHandle, SMNetworkDirectoryEnumerator_ServerSide, NSObject, IASInputStream;
@protocol OS_dispatch_semaphore;

@interface SMNPathingAction : SMNAction

@property (retain) NSString *startingPath;
@property (retain) NSSet *dontDescendPaths;
@property (retain) NSSet *additionalProperties;
@property (retain) NSFileHandle *networkDirectoryEnumeratorStream;
@property (retain) SMNetworkDirectoryEnumerator_ServerSide *dirEnumerator;
@property (retain) IASInputStream *inputStream;
@property (retain) NSObject<OS_dispatch_semaphore> *doneReadingResults;
@property BOOL readResultSuccess;
@property (retain) NSString *compressionFormat;
@property BOOL autoSizeBundles;
@property BOOL autoDetectBundles;
@property BOOL useTrueOnDiskSizes;
@property (retain) NSDictionary *restartPoint;
@property (copy, nonatomic) id /* block */ receiveDataBlock;

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;
+ (BOOL)streamsResults;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)cleanUp;
- (id)requestPayload;
- (void)readResults;
- (id)initWithStartingPath:(id)a0 dontDescendPaths:(id)a1 andRestartPoint:(id)a2;
- (void)setReadResultsResult:(BOOL)a0;
- (BOOL)receiveResultOnFd:(int)a0 errorIsFatal:(BOOL *)a1;
- (BOOL)sendResultOnFd:(int)a0;
- (id)setOfClassesToDecodeInThePathingResultOnly;
- (void)stopPathing;

@end
