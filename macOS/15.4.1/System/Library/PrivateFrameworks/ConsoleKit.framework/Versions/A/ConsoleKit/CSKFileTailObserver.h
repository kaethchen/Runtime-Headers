@class NSString, CSKCoalescer, NSFileHandle, NSObject;
@protocol OS_dispatch_queue;

@interface CSKFileTailObserver : CSKFileObserver

@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (retain, nonatomic) NSString *extension;
@property (nonatomic) BOOL isCompressed;
@property (retain, nonatomic) CSKCoalescer *coalescer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *coalescerQueue;
@property (retain, nonatomic) NSString *userTmpDirPath;
@property (readonly, nonatomic) BOOL isJSONCompatibleType;
@property (copy, nonatomic) id /* block */ eventDataHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventDataQueue;

- (void).cxx_destruct;
- (void)stop;
- (id /* block */)_eventHandler;
- (id)_eventDataQueue;
- (id /* block */)_descriptorDidOpenHandler;
- (id)_fetchLatestData;
- (void)_scheduleEventDataHandlerWithData:(id)a0 isInitialFetch:(BOOL)a1;
- (id)initWithURL:(id)a0 eventDataHandler:(id /* block */)a1;
- (id)initWithURL:(id)a0 eventHandler:(id /* block */)a1;
- (void)observerWillStart;

@end
