@class NSString;

@interface SCStreamConfiguration : NSObject <NSCopying>

@property (nonatomic, getter=isUntransformFrameForSingleWindowSharing) BOOL untransformFrameForSingleWindowSharing;
@property (nonatomic) double contentScale;
@property (nonatomic) BOOL enableAlwaysHDCapture;
@property (nonatomic) BOOL bestResolution;
@property (nonatomic) BOOL nominalResolution;
@property (nonatomic) BOOL boundsIgnoreFraming;
@property (nonatomic) BOOL ignoreGlobalClipShape;
@property (nonatomic) BOOL ignoreFramingDisplay;
@property (nonatomic) BOOL ignoreFramingSingleWindow;
@property (nonatomic) BOOL onlyShadows;
@property (nonatomic) BOOL cropNewsroomToUpperLeftCorner;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumFrameInterval;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) BOOL scalesToFit;
@property (nonatomic) BOOL preservesAspectRatio;
@property (retain, nonatomic) NSString *streamName;
@property (nonatomic) BOOL showsCursor;
@property (nonatomic) BOOL showMouseClicks;
@property (nonatomic) struct CGColor { } *backgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } destinationRect;
@property (nonatomic) long long queueDepth;
@property (nonatomic) struct __CFString { } *colorMatrix;
@property (nonatomic) struct __CFString { } *colorSpaceName;
@property (nonatomic) BOOL capturesAudio;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long channelCount;
@property (nonatomic) BOOL excludesCurrentProcessAudio;
@property (nonatomic) BOOL ignoreShadowsDisplay;
@property (nonatomic) BOOL ignoreShadowsSingleWindow;
@property (nonatomic) long long captureResolution;
@property (nonatomic) BOOL capturesShadowsOnly;
@property (nonatomic) BOOL shouldBeOpaque;
@property (nonatomic) BOOL ignoreGlobalClipDisplay;
@property (nonatomic) BOOL ignoreGlobalClipSingleWindow;
@property (nonatomic) long long presenterOverlayPrivacyAlertSetting;
@property (nonatomic) BOOL includeChildWindows;
@property (nonatomic) BOOL captureMicrophone;
@property (retain, nonatomic) NSString *microphoneCaptureDeviceID;
@property (nonatomic) long long captureDynamicRange;

+ (id)streamConfigurationWithPreset:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToSCStreamConfiguration:(id)a0;

@end
