@class QCStructurePort, QCNumberPort, QCStringPort, QCBooleanPort;

@interface QCXMLDownloader : QCDownloadPatch {
    QCStringPort *inputURL;
    QCBooleanPort *inputSignal;
    QCStructurePort *outputStructure;
    QCNumberPort *outputProgress;
    QCBooleanPort *outputSignal;
    BOOL _synchronousMode;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)synchronousMode;
- (void)setSynchronousMode:(BOOL)a0;
- (BOOL)setup:(id)a0;
- (id)createResourceWithDownloadedData:(id)a0 sourceURL:(id)a1;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;

@end
