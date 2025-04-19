@class NSString, NSSet, NSDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SMNBomAction : SMNAction

@property (retain) NSString *sourcePath;
@property (retain) NSString *destinationPath;
@property (retain) NSString *restartPoint;
@property (retain) NSString *errorPath;
@property (retain) NSString *lastPathReceived;
@property (retain) NSSet *excludedPathsSet;
@property (retain) NSDate *lastLoggedThroughputDate;
@property unsigned long long intraFileBytesCompletedThisInterval;
@property unsigned long long intraFileBytesCompletedOverlappingFromLastInterval;
@property unsigned long long totalBytesCompletedThisInterval;
@property int returnCode;
@property struct _BOMCopier { } *copier;
@property struct BOMSys { void *x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; void /* function */ *x24; void /* function */ *x25; void /* function */ *x26; void /* function */ *x27; void /* function */ *x28; void /* function */ *x29; void /* function */ *x30; void /* function */ *x31; void /* function */ *x32; void /* function */ *x33; void /* function */ *x34; void /* function */ *x35; void /* function */ *x36; void /* function */ *x37; void /* function */ *x38; void /* function */ *x39; void /* function */ *x40; void /* function */ *x41; void /* function */ *x42; void /* function */ *x43; } *skipUbiquityBomSys;
@property (retain) NSDictionary *bomCopyOptions;
@property (retain) NSObject<OS_dispatch_queue> *atomicQueue;
@property (retain) NSObject<OS_dispatch_source> *watchdogSource;
@property (retain) NSObject<OS_dispatch_queue> *resumeQueue;
@property (retain) NSString *compressionLevel;
@property (weak) NSObject *bomCallbacksDelegate;

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;
+ (id)formattedExcludedPathsFromRaw:(id)a0;
+ (BOOL)shouldCloseInboundStreamWhenDone;
+ (BOOL)shouldCloseOutboundStreamWhenDone;
+ (BOOL)streamsResults;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)requestPayload;
- (id)initWithSource:(id)a0 andDestination:(id)a1 andRestartPoint:(id)a2 andExcludedPaths:(id)a3 andOptions:(id)a4;
- (BOOL)receiveResultOnFd:(int)a0 errorIsFatal:(BOOL *)a1;
- (BOOL)sendResultOnFd:(int)a0;
- (id)_indexBomPathForRegularFile:(id)a0;
- (BOOL)_readCompletelyFromFd:(int)a0 buffer:(void *)a1 length:(unsigned long long)a2;
- (BOOL)_writeCompletelyToFd:(int)a0 buffer:(const void *)a1 length:(unsigned long long)a2;
- (BOOL)shouldSkip:(const char *)a0 ofType:(int)a1 andSize:(long long)a2;

@end
