@class NSArray, NSDictionary, AVCaptureAudioFileOutputInternal_Tundra;

@interface AVCaptureAudioFileOutput_Tundra : AVCaptureFileOutput_Tundra {
    AVCaptureAudioFileOutputInternal_Tundra *_internal;
}

@property (copy, nonatomic) NSArray *metadata;
@property (copy, nonatomic) NSDictionary *audioSettings;

+ (id)new;
+ (void)initialize;
+ (id)_avMetadataToID3Metadata:(id)a0;
+ (id)availableOutputFileTypes;

- (void)dealloc;
- (id)init;
- (id)_activeConnections;
- (void)removeConnection:(id)a0;
- (BOOL)isRecording;
- (void)stopRecording;
- (void)startRecordingToOutputFileURL:(id)a0 outputFileType:(id)a1 recordingDelegate:(id)a2;
- (void)resumeRecording;
- (void)_addActiveConnection:(id)a0;
- (void)_cancelAllOperations;
- (void)_cancelFileControlCallbackTimeoutTimer;
- (int)_compressorDidRenderConnection:(id)a0 busNumber:(unsigned int)a1 processHints:(unsigned int *)a2 sampleBuffer:(struct opaqueCMSampleBuffer **)a3;
- (void)_controlFileWritingForConnection:(id)a0 busNumber:(unsigned int)a1 fileControlToken:(struct OpaqueFileWritingControlToken { } *)a2;
- (void)_fileControlCallbackTimeout:(id)a0;
- (unsigned int)_fileWriterUnitElementForConnection:(id)a0;
- (void)_filesCompleted:(id)a0;
- (void)_forciblyStopFileWritingForRunningRecordingOperation;
- (void)_handleCanceledOperations:(id)a0;
- (id)_noDataConnections;
- (void)_operationFailed:(id)a0;
- (void)_refreshRecordingState;
- (void)_removeActiveConnection:(id)a0;
- (BOOL)_removeRunningRecordingOperationDescriptorEqualTo:(id)a0;
- (id)_runningRecordingOperationDescriptor;
- (void)_setNoDataConnections:(id)a0;
- (void)_setPaused:(BOOL)a0;
- (void)_setRunningRecordingOperationDescriptor:(id)a0;
- (void)_setStopError:(id)a0;
- (void)_startFileControlCallbackTimeoutTimer;
- (void)_startFileWritingForConnection:(id)a0 fileControlToken:(struct OpaqueFileWritingControlToken { } *)a1 runningRecordingOperationDescriptor:(id)a2;
- (void)_startRecordingToOutputFileURL:(id)a0 recordingDelegate:(id)a1;
- (id)_stopError;
- (void)_stopFileWritingForConnection:(id)a0 fileControlToken:(struct OpaqueFileWritingControlToken { } *)a1 runningRecordingOperationDescriptor:(id)a2 stopWritingFlags:(unsigned int)a3 stopError:(id)a4;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_syncTime;
- (void)_updateCompressorNodesForConnection:(id)a0;
- (id)addConnection:(id)a0 error:(id *)a1;
- (BOOL)addOutputUnitsForConnection:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (id)applicationAnalytics;
- (BOOL)canAddConnectionForMediaType:(id)a0;
- (int)connectionGraphNodeForConnection:(id)a0;
- (id)connectionMediaTypes;
- (unsigned int)connectionUnitInputNumberForConnection:(id)a0;
- (BOOL)getAudioSplitterNode:(int *)a0 andAudioMixerNode:(int *)a1 forConnection:(id)a2;
- (void)graphWillStartForSession:(id)a0;
- (void)graphWillStopForSession:(id)a0 error:(id)a1;
- (BOOL)isRecordingPaused;
- (id)notReadyError;
- (id)outputFileURL;
- (void)pauseRecording;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })recordedDuration;
- (long long)recordedFileSize;
- (void)removeOutputUnitsForConnection:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;
- (BOOL)setEnabled:(BOOL)a0 forConnection:(id)a1;
- (void)startRecordingToOutputFileURL:(id)a0 recordingDelegate:(id)a1;
- (id)stopError;

@end
