@interface _NSTableRowSwipeVelocityFilter : _NS1DVelocityFilter {
    long long _filterDepth;
    double _lastDeltaInput;
    BOOL _isBufferFull;
    long long _bufferIndex;
    double _deltaBuffer[3];
    double _timeBuffer[3];
}

- (id)init;
- (void)reset;
- (void)addDelta:(double)a0 withTimestamp:(double)a1;
- (double)filteredVelocity;

@end
