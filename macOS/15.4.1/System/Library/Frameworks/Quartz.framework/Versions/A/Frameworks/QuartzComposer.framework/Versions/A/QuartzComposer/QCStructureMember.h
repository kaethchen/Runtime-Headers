@class QCVirtualPort, QCStructurePort, QCPort;

@interface QCStructureMember : QCPatch {
    QCStructurePort *inputStructure;
    QCVirtualPort *outputMember;
    QCPort *_inPort;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
