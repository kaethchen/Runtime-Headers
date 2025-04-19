@class NSString, AVCaptureAudioPreviewOutputInternal_Tundra;

@interface AVCaptureAudioPreviewOutput_Tundra : AVCaptureOutput_Tundra {
    AVCaptureAudioPreviewOutputInternal_Tundra *_internal;
}

@property (copy, nonatomic) NSString *outputDeviceUniqueID;
@property (nonatomic) float volume;

+ (id)new;
+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)_updateCompressorNodesForConnection:(id)a0;
- (void)_updateOutputDeviceUniqueID:(id)a0;
- (void)_updateVolume:(float)a0;
- (BOOL)addOutputUnitsForConnection:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (id)applicationAnalytics;
- (BOOL)canAddConnectionForMediaType:(id)a0;
- (int)connectionGraphNodeForConnection:(id)a0;
- (id)connectionMediaTypes;
- (unsigned int)connectionUnitInputNumberForConnection:(id)a0;
- (BOOL)getAudioSplitterNode:(int *)a0 andAudioMixerNode:(int *)a1 forConnection:(id)a2;
- (id)outputGraphNodeDescriptionForConnection:(id)a0;
- (void)removeOutputUnitsForConnection:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;

@end
