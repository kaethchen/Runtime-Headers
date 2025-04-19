@class NSArray, AVCaptureInputInternal_Tundra;

@interface AVCaptureInput_Tundra : NSObject {
    AVCaptureInputInternal_Tundra *_inputInternal;
}

@property (readonly, nonatomic) NSArray *ports;

- (void)dealloc;
- (id)session;
- (void)setSession:(id)a0;
- (BOOL)addInputUnitsForInputPort:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (id)applicationAnalytics;
- (int)clockProviderNodeForInputPort:(id)a0;
- (int)graphNodeForInputPort:(id)a0;
- (void)graphWillStartForSession:(id)a0;
- (void)graphWillStopForSession:(id)a0 error:(id)a1;
- (id)initSubclass;
- (struct OpaqueCMClock { } *)inputClock;
- (id)notReadyError;
- (void)removeInputUnitsForInputPort:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;
- (void)sessionWillUseOutputDecompressionOptions:(id)a0 forPort:(id)a1;
- (unsigned int)unitOutputNumberForInputPort:(id)a0;

@end
