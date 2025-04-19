@class QCStructurePort;

@interface QCStructureReverse : QCPatch {
    QCStructurePort *inputStructure;
    QCStructurePort *outputStructure;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
