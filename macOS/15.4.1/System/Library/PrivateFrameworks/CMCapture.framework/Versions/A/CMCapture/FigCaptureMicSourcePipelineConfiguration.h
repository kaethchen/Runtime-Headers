@class FigCaptureSourceConfiguration, NSArray, BWZoomCommandHandler, NSString;

@interface FigCaptureMicSourcePipelineConfiguration : NSObject {
    FigCaptureSourceConfiguration *_micConfiguration;
    NSArray *_micConnectionConfigurations;
    FigCaptureSourceConfiguration *_cameraConfigurationForStereoAudioCapture;
    BWZoomCommandHandler *_zoomCommandHandlerForStereoAudioCapture;
    BOOL _flipStereoAudioCaptureChannels;
    BOOL _windNoiseRemovalEnabled;
    NSString *_sessionPreset;
    BOOL _configuresAppAudioSession;
    BOOL _configuresAppAudioSessionToMixWithOthers;
    BOOL _clientOSVersionSupportsDecoupledIO;
    struct { unsigned int val[8]; } _clientAuditToken;
}

- (void)dealloc;

@end
