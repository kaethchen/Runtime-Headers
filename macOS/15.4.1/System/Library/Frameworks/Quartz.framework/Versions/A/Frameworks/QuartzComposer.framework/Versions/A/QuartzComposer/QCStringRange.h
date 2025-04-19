@class QCIndexPort, QCStringPort;

@interface QCStringRange : QCPatch {
    QCStringPort *inputString;
    QCIndexPort *inputIndex;
    QCIndexPort *inputLength;
    QCStringPort *outputString;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
