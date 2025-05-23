@class NSArray, AVCaptureVideoPreviewLayer_Tundra, AVCaptureOutput_Tundra, AVCaptureConnectionInternal_Tundra;

@interface AVCaptureConnection_Tundra : NSObject {
    AVCaptureConnectionInternal_Tundra *_internal;
}

@property (readonly, nonatomic) NSArray *inputPorts;
@property (readonly, nonatomic) AVCaptureOutput_Tundra *output;
@property (readonly, nonatomic) AVCaptureVideoPreviewLayer_Tundra *videoPreviewLayer;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSArray *audioChannels;
@property (readonly, nonatomic, getter=isVideoMirroringSupported) BOOL supportsVideoMirroring;
@property (nonatomic, getter=isVideoMirrored) BOOL videoMirrored;
@property (nonatomic) BOOL automaticallyAdjustsVideoMirroring;
@property (nonatomic) double videoRotationAngle;
@property (readonly, nonatomic, getter=isVideoOrientationSupported) BOOL supportsVideoOrientation;
@property (nonatomic) long long videoOrientation;
@property (readonly, nonatomic, getter=isVideoFieldModeSupported) BOOL supportsVideoFieldMode;
@property (nonatomic) long long videoFieldMode;
@property (readonly, nonatomic, getter=isVideoMinFrameDurationSupported) BOOL supportsVideoMinFrameDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } videoMinFrameDuration;
@property (readonly, nonatomic, getter=isVideoMaxFrameDurationSupported) BOOL supportsVideoMaxFrameDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } videoMaxFrameDuration;
@property (readonly, nonatomic) double videoMaxScaleAndCropFactor;
@property (nonatomic) double videoScaleAndCropFactor;
@property (nonatomic) long long preferredVideoStabilizationMode;
@property (readonly, nonatomic) long long activeVideoStabilizationMode;
@property (readonly, nonatomic, getter=isVideoStabilizationSupported) BOOL supportsVideoStabilization;
@property (readonly, nonatomic, getter=isVideoStabilizationEnabled) BOOL videoStabilizationEnabled;
@property (nonatomic) BOOL enablesVideoStabilizationWhenAvailable;
@property (readonly, nonatomic, getter=isCameraIntrinsicMatrixDeliverySupported) BOOL cameraIntrinsicMatrixDeliverySupported;
@property (nonatomic, getter=isCameraIntrinsicMatrixDeliveryEnabled) BOOL cameraIntrinsicMatrixDeliveryEnabled;

+ (void)initialize;
+ (id)connectionWithInputPort:(id)a0 videoPreviewLayer:(id)a1;
+ (id)connectionWithInputPorts:(id)a0 output:(id)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)setActive:(BOOL)a0;
- (id)mediaType;
- (BOOL)isLive;
- (void)_applySplitterChannelMapFromAudioChannelsEnabled;
- (void)_applyVolumeFromAudioChannel:(id)a0;
- (BOOL)_audioChannelsAreAllEnabled;
- (id)_audioLevelsForPropertyID:(unsigned int)a0;
- (void)_clearAudioPropertyListeners;
- (struct opaqueCMFormatDescription { } *)_copyExpandedSourceSummaryAudioFormatDescription;
- (struct opaqueCMFormatDescription { } *)_copySourceSummaryAudioFormatDescription;
- (struct opaqueCMFormatDescription { } *)_copySourceSummaryAudioFormatDescriptionWithOptionalExpansion:(BOOL)a0;
- (BOOL)_isVideoOrientationSupported;
- (void)_mixerNodeFormatDescriptionDidChange;
- (void)_rebuildEnabledAudioChannelsArray;
- (void)_setVideoMirrored:(BOOL)a0;
- (void)_setVideoOrientation:(long long)a0;
- (int *)_splitterAudioChannelMapWithSize:(unsigned long long *)a0;
- (void)_splitterNodeFormatDescriptionDidChange;
- (void)_updateAudioAvgLevelsArray;
- (void)_updateAudioChannelsArrayCount;
- (void)_updateAudioPeakLevelsArray;
- (long long)_videoOrientation;
- (id)applicationAnalytics;
- (void)attachToSplitterNode:(int)a0 audioMixerNode:(int)a1;
- (void *)copyClientSequenceID;
- (struct opaqueCMFormatDescription { } *)copyPostSplitSummaryAudioFormatDescription;
- (void)detachFromAudioSplitterAndMixerNodes;
- (id)firstActiveInputPort;
- (id)firstInputPort;
- (float)getAvgAudioLevelForChannel:(id)a0;
- (float)getPeakAudioLevelForChannel:(id)a0;
- (void *)incrementClientSequenceIDAndRetain;
- (void)initCommonStorage;
- (id)initWithInputPort:(id)a0 videoPreviewLayer:(id)a1;
- (id)initWithInputPorts:(id)a0 output:(id)a1;
- (BOOL)isVideoDeviceOrientationCorrectionEnabled;
- (BOOL)isVideoDeviceOrientationCorrectionSupported;
- (BOOL)isVideoRetainedBufferCountHintSupported;
- (BOOL)isVideoRotationAngleSupported:(double)a0;
- (void *)mostRecentlySeenClientSequenceID;
- (void)setEnabled:(BOOL)a0 forChannel:(id)a1;
- (void)setGraph:(struct OpaqueCMIOGraph { } *)a0 node:(int)a1 element:(unsigned int)a2 scope:(unsigned int)a3;
- (void)setMostRecentlySeenClientSequenceID:(void *)a0;
- (void)setVideoDeviceOrientationCorrectionEnabled:(BOOL)a0;
- (void)setVideoRetainedBufferCountHint:(int)a0;
- (void)setVolume:(float)a0 forChannel:(id)a1;
- (void)setWriterElement:(unsigned int)a0;
- (id)sourceDevice;
- (int *)splitterAudioChannelMapWithSize:(unsigned long long *)a0;
- (int)videoRetainedBufferCountHint;
- (unsigned int)writerElement;

@end
