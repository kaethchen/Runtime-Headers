@class AVAudioSampleChunk, AVAsset, AVAssetTrack, NSURL, NSError, AVAssetReader, AVAssetReaderOutput;
@protocol AVAudioExtractionSessionDelegate;

@interface AVAudioExtractionSession : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sessionLock;
    BOOL _sessionHasBeenStarted;
    NSURL *_url;
    AVAsset *_asset;
    AVAssetReader *_assetReader;
    AVAssetReaderOutput *_readerOutput;
    struct opaqueCMFormatDescription { } *_formatDescription;
    const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *_streamDescription;
    unsigned long long _minSamplesPerChunk;
    unsigned long long _minChunkCount;
    unsigned long long _preferredChunkCount;
    AVAudioSampleChunk *_currentChunk;
    unsigned long long _currentChunkIndex;
}

@property (weak) id<AVAudioExtractionSessionDelegate> delegate;
@property (readonly) AVAssetTrack *track;
@property (readonly) unsigned long long samplesPerChunk;
@property (readonly) unsigned long long estimatedNumberOfChunks;
@property (readonly) unsigned long long extractionSampleRate;
@property (readonly) BOOL requiresAllSamples;
@property (readonly) unsigned long long status;
@property (readonly) NSError *error;

+ (id)extractionSessionForTrack:(id)a0 preferredChunkCount:(unsigned long long)a1 requiresAllSamples:(BOOL)a2;
+ (id)extractionSessionForTrack:(id)a0 requiresAllSamples:(BOOL)a1;
+ (id)extractionSessionForTrack:(id)a0 samplesPerChunk:(unsigned long long)a1 requiresAllSamples:(BOOL)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)_startSession;
- (BOOL)_processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)_attemptToSetupExtractionSessionWithComposition;
- (unsigned long long)_calculateChunkSizeForTrack:(id)a0 withChunkCount:(unsigned long long)a1;
- (unsigned long long)_calculateOptimalExtractionSampleRate;
- (void)_cleanUpExtractionSession;
- (BOOL)_copyAudioBufferListForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 audioBufferList:(struct AudioBufferList **)a1 backingBuffer:(struct OpaqueCMBlockBuffer **)a2;
- (BOOL)_ensureExtractionSampleRateMatchesSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_extract;
- (unsigned long long)_sampleRateForAudioTrack:(id)a0;
- (void)_setEstimatedNumberOfChunks;
- (void)_setSamplesPerChunk:(unsigned long long)a0;
- (BOOL)_setupExtractionSession;
- (BOOL)_verifySampleBufferCompatibility:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithTrack:(id)a0 preferredChunkCount:(unsigned long long)a1 requiresAllSamples:(BOOL)a2;
- (id)initWithTrack:(id)a0 requiresAllSamples:(BOOL)a1;
- (id)initWithTrack:(id)a0 samplesPerChunk:(unsigned long long)a1 requiresAllSamples:(BOOL)a2;

@end
