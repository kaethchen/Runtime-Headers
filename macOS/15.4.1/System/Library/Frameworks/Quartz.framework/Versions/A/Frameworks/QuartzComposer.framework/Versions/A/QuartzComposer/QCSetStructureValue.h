@class QCStringPort, QCStructurePort, QCNumberPort;

@interface QCSetStructureValue : QCPatch {
    QCStructurePort *inputStructure;
    QCNumberPort *inputValue;
    QCStringPort *inputKeyPath;
    QCStructurePort *outputStructure;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (BOOL)setup:(id)a0;
- (id)_setStructureValue:(id)a0 keyPath:(id)a1 value:(double)a2;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
