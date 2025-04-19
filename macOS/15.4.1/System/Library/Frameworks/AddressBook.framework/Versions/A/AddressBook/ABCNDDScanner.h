@class NSObject;
@protocol OS_dispatch_queue;

@interface ABCNDDScanner : NSObject {
    NSObject<OS_dispatch_queue> *_analysisQueue;
    struct __DDScanner { } *_scanner;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueueLabel:(const char *)a0;
- (id)scanString:(id)a0 forResultsOfType:(id)a1;

@end
