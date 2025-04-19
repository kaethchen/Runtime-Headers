@protocol ILMBPMRRunLoopDelegate;

@interface ILMBPMRRunLoopReporter : NSObject {
    struct __CFRunLoopObserver { } *mObserver;
    id<ILMBPMRRunLoopDelegate> mDelegate;
}

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)callback:(unsigned long long)a0;

@end
