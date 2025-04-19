@class QCIndexPort, QCStructurePort;

@interface QCRepositoryCompositions : QCPatch {
    QCIndexPort *inputProtocol;
    QCStructurePort *inputAttributes;
    QCStructurePort *outputCompositions;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
