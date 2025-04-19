@class AVDispatchOnce, AVWeakReference;

@interface AVTrackReaderInspector : AVAssetTrackInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    struct OpaqueFigTrackReader { } *_trackReader;
    AVDispatchOnce *_copySampleCursorServiceOnce;
    struct OpaqueFigSampleCursorService { } *_figSampleCursorService;
    BOOL _sampleCursorTimeAccuracyIsExact;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
    BOOL _prefersNominalDurations;
}

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)languageCode;
- (BOOL)isEnabled;
- (id)asset;
- (struct CGSize { double x0; double x1; })dimensions;
- (long long)layer;
- (id)segments;
- (id)mediaType;
- (int)trackID;
- (float)nominalFrameRate;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (struct OpaqueFigTrackReader { } *)_figTrackReader;
- (BOOL)isSelfContained;
- (float)preferredVolume;
- (struct OpaqueFigFormatReader { } *)_figFormatReader;
- (unsigned int)_figMediaType;
- (struct OpaqueFigSampleCursorService { } *)_getFigSampleCursorServiceReportingTimeAccuracy:(BOOL *)a0;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (id)_segmentsPreferringNominalDurations:(BOOL)a0;
- (id)_trackReferences;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (long long)alternateGroupID;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (int)decodabilityValidationResult;
- (long long)defaultAlternateGroupID;
- (float)estimatedDataRate;
- (id)extendedLanguageTag;
- (id)formatDescriptions;
- (BOOL)hasAudioSampleDependencies;
- (BOOL)hasSeamSamples;
- (BOOL)isDecodable;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (BOOL)isPlayable;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })latentBaseDecodeTimeStampOfFirstTrackFragment;
- (id)loudnessInfo;
- (id)mediaCharacteristics;
- (id)metadataForFormat:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minSampleDuration;
- (struct CGSize { double x0; double x1; })naturalSize;
- (int)naturalTimeScale;
- (float)peakDataRate;
- (int)playabilityValidationResult;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (long long)provisionalAlternateGroupID;
- (BOOL)requiresFrameReordering;
- (id)segmentsAsPresented;
- (long long)totalSampleDataLength;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })uneditedDuration;

@end
