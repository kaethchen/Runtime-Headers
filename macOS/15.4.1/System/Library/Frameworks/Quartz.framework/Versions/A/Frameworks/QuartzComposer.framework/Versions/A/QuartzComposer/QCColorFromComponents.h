@class QCNumberPort, QCColorPort;

@interface QCColorFromComponents : QCPatch {
    QCNumberPort *input1;
    QCNumberPort *input2;
    QCNumberPort *input3;
    QCNumberPort *inputAlpha;
    QCColorPort *outputColor;
    int _mode;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
