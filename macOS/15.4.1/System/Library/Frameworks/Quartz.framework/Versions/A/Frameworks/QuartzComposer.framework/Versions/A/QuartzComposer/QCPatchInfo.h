@class NSString, QCStructurePort, QCStringPort;

@interface QCPatchInfo : QCPatch {
    QCStringPort *inputPath;
    QCStructurePort *outputMetadata;
    QCStructurePort *outputInputList;
    QCStructurePort *outputOutputList;
    NSString *_compositionLocation;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (BOOL)setup:(id)a0;
- (void)_setComposition:(id)a0 context:(id)a1;
- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
