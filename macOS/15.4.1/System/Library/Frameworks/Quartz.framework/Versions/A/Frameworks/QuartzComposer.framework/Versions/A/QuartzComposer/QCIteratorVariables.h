@class QCNumberPort, QCIndexPort, QCIterator;

@interface QCIteratorVariables : QCPatch {
    QCIterator *_iterator;
    QCIndexPort *outputIndex;
    QCNumberPort *outputPosition;
    QCIndexPort *outputCount;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (BOOL)setup:(id)a0;
- (BOOL)_execute:(double)a0 arguments:(id)a1;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
