@interface NWURLSessionMultipartBoundaryRecognizer : NSObject {
    char *_pattern;
    unsigned long long _patternLength;
    char *_rollbackBuffer;
    unsigned long long _rollbackBufferCapacity;
    unsigned long long _start;
    unsigned long long _end;
}

- (void)dealloc;

@end
