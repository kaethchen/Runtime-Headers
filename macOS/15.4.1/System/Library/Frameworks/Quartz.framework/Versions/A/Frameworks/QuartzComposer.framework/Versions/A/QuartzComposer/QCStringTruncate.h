@class QCIndexPort, QCStringPort;

@interface QCStringTruncate : QCPatch {
    QCStringPort *inputString;
    QCIndexPort *inputDirection;
    QCIndexPort *inputMode;
    QCIndexPort *inputMax;
    QCStringPort *inputToken;
    QCStringPort *outputString;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
