@class NSArray, AVWeakReference, AVCaptureDeviceInput_Tundra, NSMutableArray, AVCaptureDevice_Tundra;

@interface AVCaptureConnectionInternal_Tundra : NSObject {
    NSMutableArray *inputPorts;
    AVWeakReference *outputWeakReference;
    AVWeakReference *videoPreviewLayerWeakReference;
    AVCaptureDeviceInput_Tundra *sourceDeviceInput;
    AVCaptureDevice_Tundra *sourceDevice;
    BOOL active;
    BOOL enabled;
    NSMutableArray *audioChannels;
    NSMutableArray *enabledAudioChannels;
    NSArray *audioChannelPeakLevels;
    long long lastGetAudioPeakLevelsTime;
    NSArray *audioChannelAvgLevels;
    long long lastGetAudioAvgLevelsTime;
    BOOL automaticallyAdjustsVideoMirroring;
    BOOL videoMirrored;
    long long videoOrientation;
    double maxVideoScaleAndCropFactor;
    double videoScaleAndCropFactor;
    long long videoFieldMode;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } videoMinFrameDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } videoMaxFrameDuration;
    struct OpaqueCMIOGraph { } *graph;
    int node;
    unsigned int element;
    unsigned int scope;
    struct { int x0; int x1; void *x2; } *extendedNodeInfo;
    unsigned int writerElement;
    long long clientSequenceID;
    struct __CFString { } *clientSequenceIDCF;
    void *mostRecentlySeenClientSequenceID;
    long long preferredVideoStabilizationMode;
    BOOL didChangeAudioChannelVolume;
    BOOL didChangeAudioChannelEnabled;
    BOOL didChangeVideoFieldMode;
}

@end
