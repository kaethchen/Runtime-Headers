@class NSString;

@interface CSDenseCandidateQueue : NSObject {
    struct __CFBinaryHeap { } *_denseQueue;
    NSString *_bundleID;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
