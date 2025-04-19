@class QCNumberPort, QCBooleanPort;

@interface QCInfo : QCPatch {
    QCNumberPort *outputVersion;
    QCBooleanPort *outputSafeMode;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (BOOL)setup:(id)a0;

@end
