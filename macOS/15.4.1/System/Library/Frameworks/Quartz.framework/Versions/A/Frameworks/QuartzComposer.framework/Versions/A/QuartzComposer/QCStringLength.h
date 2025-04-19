@class QCIndexPort, QCStringPort;

@interface QCStringLength : QCPatch {
    QCStringPort *inputString;
    QCIndexPort *outputLength;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
