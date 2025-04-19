@class QCIndexPort;

@interface QCIterator : QCPatch {
    QCIndexPort *inputCount;
    unsigned long long _currentIndex;
}

+ (BOOL)isSafe;
+ (int)executionModeWithIdentifier:(id)a0;
+ (BOOL)supportsOptimizedExecutionForIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (double)nextExecutionTimeForSubpatches:(id)a0 time:(double)a1 arguments:(id)a2;

@end
