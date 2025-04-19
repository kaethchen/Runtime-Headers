@interface NWURLSessionMultipartPartBoundarySuffixRecognizer : NSObject {
    BOOL _shouldUnget;
    int _nextState;
    unsigned long long _bytesConsumed;
    char *_buffer;
    unsigned long long _count;
}

- (void)dealloc;
- (id)init;

@end
