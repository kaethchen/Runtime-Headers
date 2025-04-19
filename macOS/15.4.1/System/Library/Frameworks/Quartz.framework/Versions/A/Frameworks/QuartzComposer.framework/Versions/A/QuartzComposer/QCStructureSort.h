@class NSMutableArray, QCStructurePort, QCStringPort;

@interface QCStructureSort : QCPatch {
    QCStructurePort *inputStructure;
    QCStringPort *inputSortingKey;
    QCStructurePort *outputStructure;
    NSMutableArray *_cachedSortingKey;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
