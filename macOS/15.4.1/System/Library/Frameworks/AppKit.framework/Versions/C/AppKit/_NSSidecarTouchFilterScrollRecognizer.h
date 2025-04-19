@interface _NSSidecarTouchFilterScrollRecognizer : _NSSidecarTouchFilterRecognizer {
    long long _index1;
    long long _index2;
    struct CGPoint { double x; double y; } _initialWinLoc;
    struct CGPoint { double x; double y; } _lastWinLoc;
    struct CGPoint { double x; double y; } _currentWinLoc;
    unsigned char _foundTwoTouches : 1;
}

- (id)init;
- (void)reset;
- (void)action;
- (void)handlePossibleCGEvent:(struct __CGEvent { } *)a0 hidEvent:(struct __IOHIDEvent { } *)a1;
- (void)failRecognition;
- (void)handleCGEvent:(struct __CGEvent { } *)a0 hidEvent:(struct __IOHIDEvent { } *)a1;
- (void)handleRecognizedCGEvent:(struct __CGEvent { } *)a0 hidEvent:(struct __IOHIDEvent { } *)a1;

@end
