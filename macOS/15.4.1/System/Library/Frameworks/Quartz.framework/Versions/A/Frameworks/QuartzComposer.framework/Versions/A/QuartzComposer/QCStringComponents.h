@class QCStructurePort, QCStringPort;

@interface QCStringComponents : QCPatch {
    QCStringPort *inputString;
    QCStringPort *inputSeparator;
    QCStructurePort *outputComponents;
    BOOL _keylessStructures;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
