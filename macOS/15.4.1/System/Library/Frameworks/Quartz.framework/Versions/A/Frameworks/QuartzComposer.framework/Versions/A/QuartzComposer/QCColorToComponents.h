@class QCColorPort, QCNumberPort;

@interface QCColorToComponents : QCPatch {
    QCColorPort *inputColor;
    QCNumberPort *output1;
    QCNumberPort *output2;
    QCNumberPort *output3;
    QCNumberPort *outputAlpha;
    int _mode;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
