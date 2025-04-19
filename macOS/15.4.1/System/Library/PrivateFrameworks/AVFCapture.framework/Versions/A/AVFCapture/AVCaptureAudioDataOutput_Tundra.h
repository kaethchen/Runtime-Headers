@class NSDictionary, AVCaptureAudioDataOutputInternal_Tundra, NSObject;
@protocol OS_dispatch_queue, AVCaptureAudioDataOutputSampleBufferDelegate_Tundra;

@interface AVCaptureAudioDataOutput_Tundra : AVCaptureOutput_Tundra {
    AVCaptureAudioDataOutputInternal_Tundra *_internal;
}

@property (readonly, nonatomic) id<AVCaptureAudioDataOutputSampleBufferDelegate_Tundra> sampleBufferDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property (copy, nonatomic) NSDictionary *audioSettings;

+ (id)new;
+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)_defaultCaptureAudioSettings;
- (id)_getAVAudioOutputSettings;
- (void)_render:(id)a0 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)_updateCompressorNodesForConnection:(id)a0;
- (BOOL)addOutputUnitsForConnection:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (id)avCaptureOutputSettingsForConnection:(id)a0 fileType:(id)a1;
- (BOOL)canAddConnectionForMediaType:(id)a0;
- (int)connectionGraphNodeForConnection:(id)a0;
- (id)connectionMediaTypes;
- (unsigned int)connectionUnitInputNumberForConnection:(id)a0;
- (BOOL)getAudioSplitterNode:(int *)a0 andAudioMixerNode:(int *)a1 forConnection:(id)a2;
- (id)outputGraphNodeDescriptionForConnection:(id)a0;
- (id)recommendedAudioSettingsForAssetWriterWithOutputFileType:(id)a0;
- (void)removeOutputUnitsForConnection:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;
- (void)setSampleBufferDelegate:(id)a0 queue:(id)a1;
- (id)supportedAssetWriterOutputFileTypes;

@end
