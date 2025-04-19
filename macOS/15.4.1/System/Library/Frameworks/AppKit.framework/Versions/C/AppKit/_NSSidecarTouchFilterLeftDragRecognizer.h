@interface _NSSidecarTouchFilterLeftDragRecognizer : _NSSidecarTouchFilterRecognizer {
    long long _trackingIdx;
    long long _tapCount;
    struct CGPoint { double x; double y; } _initialWinLoc;
    struct CGPoint { double x; double y; } _currentWinLoc;
    unsigned long long _lastUpTimestamp;
    unsigned char _postedMouseDown : 1;
}

- (id)init;
- (void)reset;
- (void)action;
- (void)handlePossibleCGEvent:(struct __CGEvent { } *)a0 hidEvent:(struct __IOHIDEvent { } *)a1;
- (void)endRecognitionCGEvent:(struct __CGEvent { } *)a0 location:(struct CGPoint { double x0; double x1; })a1;
- (void)failRecognition;
- (void)clearTimer;
- (void)enoughTimeElapsed:(id)a0;
- (void)handleCGEvent:(struct __CGEvent { } *)a0 hidEvent:(struct __IOHIDEvent { } *)a1;
- (void)handleRecognizedCGEvent:(struct __CGEvent { } *)a0 hidEvent:(struct __IOHIDEvent { } *)a1;
- (void)postMouseDown;
- (void)startTimer;

@end
