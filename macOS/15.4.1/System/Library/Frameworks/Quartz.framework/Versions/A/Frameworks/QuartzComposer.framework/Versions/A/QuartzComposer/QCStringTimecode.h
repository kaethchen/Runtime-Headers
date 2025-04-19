@class QCNumberPort, QCStringPort;

@interface QCStringTimecode : QCPatch {
    QCNumberPort *inputTime;
    QCStringPort *outputString;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
