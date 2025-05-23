@class QCNumberPort;

@interface QCRoundValue : QCPatch {
    QCNumberPort *inputValue;
    QCNumberPort *outputRound;
    QCNumberPort *outputFloor;
    QCNumberPort *outputCeil;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
