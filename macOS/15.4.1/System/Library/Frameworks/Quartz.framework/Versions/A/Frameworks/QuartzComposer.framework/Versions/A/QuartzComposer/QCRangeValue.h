@class QCNumberPort;

@interface QCRangeValue : QCPatch {
    QCNumberPort *inputValue;
    QCNumberPort *inputMin;
    QCNumberPort *inputMax;
    QCNumberPort *outputClip;
    QCNumberPort *outputRoll;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
