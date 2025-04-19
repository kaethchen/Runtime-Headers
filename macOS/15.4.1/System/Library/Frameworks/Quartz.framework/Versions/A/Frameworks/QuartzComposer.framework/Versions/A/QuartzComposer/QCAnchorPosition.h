@class QCIndexPort, QCNumberPort;

@interface QCAnchorPosition : QCPatch {
    QCIndexPort *inputMode;
    QCNumberPort *inputX;
    QCNumberPort *inputY;
    QCNumberPort *inputWidth;
    QCNumberPort *inputHeight;
    QCNumberPort *outputX;
    QCNumberPort *outputY;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)setup:(id)a0;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
