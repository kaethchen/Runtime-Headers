@class NSString;

@interface CSL1CandidateQueue : NSObject {
    struct __CFBinaryHeap { } *_sparseQueue;
    struct __CFBinaryHeap { } *_denseQueue;
    struct __CFBinaryHeap { } *_hybridQueue;
    struct __CFBinaryHeap { } *_scoreQueue;
    NSString *_bundleID;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
