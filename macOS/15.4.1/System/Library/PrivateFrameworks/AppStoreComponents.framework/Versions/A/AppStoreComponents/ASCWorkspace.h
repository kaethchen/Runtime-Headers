@class NSRecursiveLock, NSMutableDictionary, NSOperationQueue, NSObject;
@protocol OS_os_log;

@interface ASCWorkspace : NSObject

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) ASCWorkspace *sharedWorkspace;

@property (readonly) NSMutableDictionary *pendingResults;
@property (retain, nonatomic) NSOperationQueue *openApplicationOperationQueue;
@property (readonly, nonatomic) NSRecursiveLock *stateLock;
@property (readonly, nonatomic, getter=isExtension) BOOL extension;

+ (void)withSharedWorkspace:(id)a0 perform:(id /* block */)a1;

- (void).cxx_destruct;
- (id)_init;
- (id)openURL:(id)a0;
- (id)openSensitiveURL:(id)a0;
- (id)openProductURL:(id)a0;
- (void)enqueueOpenApplicationOperation:(id)a0 pendingResult:(id)a1;
- (id)openApplicationWithBundleIdentifier:(id)a0 payloadURL:(id)a1;
- (id)openApplicationWithBundleIdentifier:(id)a0 payloadURL:(id)a1 universalLinkRequired:(BOOL)a2;
- (void)openResourceOperation:(id)a0 didFailWithError:(id)a1;
- (void)openResourceOperationDidComplete:(id)a0;
- (id)openSensitiveURL:(id)a0 frontBoardOptions:(id)a1;
- (id)openURL:(id)a0 frontBoardOptions:(id)a1;
- (id)popPendingResultForOperationName:(id)a0;

@end
