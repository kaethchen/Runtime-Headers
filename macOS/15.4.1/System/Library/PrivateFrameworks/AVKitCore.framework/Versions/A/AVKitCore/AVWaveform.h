@class NSMutableArray, AVAudioExtractionSession, AVAssetTrack, AVTrackIdentifier, NSError, NSString, NSDate;

@interface AVWaveform : NSObject <AVAudioExtractionSessionDelegate> {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _trackDuration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _waveformLock;
    BOOL _waveformHasBegunLoading;
    NSDate *_timeLastNotificationWasSent;
    BOOL _newSamplesAvailable;
    NSMutableArray *_waveformData;
    double _silenceDb;
    double _maxDb;
}

@property (readonly, weak, nonatomic) AVAssetTrack *audioTrack;
@property (readonly, nonatomic) AVAudioExtractionSession *audioExtractionSession;
@property (nonatomic) unsigned long long status;
@property (nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) unsigned long long resolution;
@property (readonly, nonatomic) float maxSampleHeight;
@property (readonly, nonatomic) AVTrackIdentifier *trackIdentifier;
@property (readonly, nonatomic) double notificationInterval;
@property (readonly, nonatomic, getter=isInitializing) BOOL initializing;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)waveformForAudioTrack:(id)a0;
+ (id)keyPathsForValuesAffectingIsInitializing;
+ (id)waveformForAudioTrack:(id)a0 withWaveformResolution:(unsigned long long)a1;
+ (id)waveformForAudioTrack:(id)a0 withWaveformResolution:(unsigned long long)a1 notificationInterval:(double)a2;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (float)sampleAtIndex:(unsigned long long)a0 withResolution:(unsigned long long)a1 forTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (BOOL)_attemptToChangeStatusTo:(unsigned long long)a0;
- (BOOL)_ensureDataBuffer:(id)a0 toCapacity:(unsigned long long)a1;
- (unsigned long long)_ensuredResolution;
- (void)_finishLoadingWaveform;
- (float)_sampleAtIndex:(unsigned long long)a0 withResolution:(unsigned long long)a1 normalizedRangeStart:(float)a2 normalizedRangeEnd:(float)a3;
- (float)_sampleToDb:(float)a0;
- (void)_setUpAudioExtractionSessionIfNeeded;
- (BOOL)_setWaveformSample:(float)a0 atIndex:(unsigned long long)a1 outError:(id *)a2;
- (BOOL)_shouldContinueLoading;
- (BOOL)_statusIsMutableToStatus:(unsigned long long)a0;
- (void)_tearDownAudioExtractionSessionIfNeeded;
- (void)_updateIsValid;
- (void)extractionSession:(id)a0 didCompleteWithError:(id)a1;
- (void)extractionSession:(id)a0 extractedSampleChunk:(id)a1 withIndex:(unsigned long long)a2;
- (void)extractionSessionDidFinishConfiguringSession:(id)a0;
- (id)initWithAudioTrack:(id)a0;
- (id)initWithAudioTrack:(id)a0 waveformResolution:(unsigned long long)a1;
- (id)initWithAudioTrack:(id)a0 waveformResolution:(unsigned long long)a1 notificationInterval:(double)a2;
- (void)loadWaveform;
- (float)sampleAtIndex:(unsigned long long)a0 withResolution:(unsigned long long)a1;
- (float)sampleAtIndex:(unsigned long long)a0 withResolution:(unsigned long long)a1 withNormalizedRange:(id)a2;

@end
