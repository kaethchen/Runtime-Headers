@class MPDocumentInternal, NSMutableDictionary, MCMontage;
@protocol MPAssetKeyDelegate;

@interface MPDocument : NSDocument <MPLayerableSupportInternal, NSSecureCoding> {
    MCMontage *_montage;
    NSMutableDictionary *_documentAttributes;
    NSMutableDictionary *_fileProperties;
    NSMutableDictionary *_layerGroups;
    BOOL _preserveMedia;
    id<MPAssetKeyDelegate> _assetKeyDelegate;
    MPDocumentInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (BOOL)isNativeType:(id)a0;
+ (id)readableTypes;
+ (id)writableTypes;
+ (id)keyedUnarchiverWithData:(id)a0 assetKeyDelegate:(id)a1 mediaProperties:(id)a2 error:(id *)a3;
+ (id)unarchiveDocumentFromData:(id)a0 error:(id *)a1;
+ (id)unarchiveDocumentFromData:(id)a0 withAssetKeyDelegate:(id)a1 andMediaProperties:(id)a2 error:(id *)a3;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)cleanup;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uuid;
- (id)displayName;
- (void)setTitle:(id)a0;
- (void)dump;
- (double)duration;
- (id)title;
- (id)backgroundColor;
- (void)addLayer:(id)a0;
- (double)aspectRatio;
- (BOOL)readFromFileWrapper:(id)a0 ofType:(id)a1 error:(id *)a2;
- (void)setBackgroundColor:(id)a0;
- (void)setNumberOfLoops:(double)a0;
- (id)documentAttributes;
- (id)layers;
- (BOOL)isLive;
- (id)currentStyle;
- (id)stateForPath:(id)a0;
- (id)styleID;
- (void)addLayers:(id)a0;
- (double)fadeOutDuration;
- (double)fadeInDuration;
- (double)numberOfLoops;
- (void)setFadeInDuration:(double)a0;
- (void)setFadeOutDuration:(double)a0;
- (void)removeAllLayers;
- (void)removePath:(id)a0;
- (id)allElements;
- (unsigned long long)applyStyle:(id)a0;
- (id)montage;
- (double)videoDuration;
- (id)allEffects;
- (void)setMontage:(id)a0;
- (double)volumeForPath:(id)a0;
- (id)mediaProperties;
- (void)setMediaProperties:(id)a0;
- (id)audioPlaylist;
- (struct CGImage { } *)CGImageForAssetAtPath:(id)a0 andSize:(struct CGSize { double x0; double x1; })a1 orientation:(char *)a2 thumbnailIfPossible:(BOOL)a3 now:(BOOL)a4;
- (struct __IOSurface { } *)IOSurfaceForAssetAtPath:(id)a0 andSize:(struct CGSize { double x0; double x1; })a1 orientation:(char *)a2;
- (id)captionForPath:(id)a0;
- (id)countryForPath:(id)a0;
- (BOOL)isSupportedMovieForAssetAtPath:(id)a0;
- (void)setLoopingMode:(unsigned long long)a0;
- (struct CGImage { } *)CGImageForAssetAtPath:(id)a0 andSize:(struct CGSize { double x0; double x1; })a1;
- (id)attributeForAssetAtPath:(id)a0 forKey:(id)a1;
- (BOOL)isInBatchModify;
- (id)marimbaDocument;
- (void)upgradeDocument;
- (void)_setMediaProperties:(id)a0;
- (id)absolutePathForAssetAtPath:(id)a0;
- (id)absolutePathForAssetAtPath:(id)a0 andSize:(struct CGSize { double x0; double x1; })a1;
- (id)absolutePathForStillAssetAtPath:(id)a0 andSize:(struct CGSize { double x0; double x1; })a1;
- (id)absoluteVideoPaths;
- (id)actionableObjectForID:(id)a0;
- (void)addAudioPath:(id)a0;
- (void)addAudioPaths:(id)a0;
- (void)addVideoPath:(id)a0;
- (void)addVideoPaths:(id)a0;
- (id)allEffectContainers;
- (id)allSlides;
- (id)allSlides:(BOOL)a0;
- (id)allSongs;
- (id)altitudeForPath:(id)a0;
- (long long)antialiasLevel;
- (id)areaForPath:(id)a0;
- (double)aspectRatioDidChange:(double)a0 atTime:(double)a1;
- (id)assetKeyDelegate;
- (id)audioPaths;
- (id)authoringOptionForKey:(id)a0;
- (id)avAssetForAssetAtPath:(id)a0;
- (struct CGColor { } *)backgroundCGColor;
- (void)beginBatchModify;
- (id)cachedAbsolutePathFromPath:(id)a0;
- (id)cachedAbsoluteStillPathFromPath:(id)a0;
- (id)cityForPath:(id)a0;
- (void)configureActions;
- (long long)countOfLayers;
- (id)creationDateForPath:(id)a0;
- (id)dataForAssetAtPath:(id)a0 andSize:(struct CGSize { double x0; double x1; })a1;
- (id)definedPlaceNameForPath:(id)a0;
- (id)descriptionForRandomTransitionPresetID:(id)a0;
- (BOOL)detectFacesInBackground;
- (id)documentAttributeForKey:(id)a0;
- (id)documentLayerGroup;
- (double)durationForPath:(id)a0;
- (void)endBatchModify;
- (double)fadeOutAudioDuration;
- (id)flightPlanFrom:(struct CGPoint { double x0; double x1; })a0 to:(struct CGPoint { double x0; double x1; })a1;
- (id)fullDebugLog;
- (void)insertLayers:(id)a0 atIndex:(long long)a1;
- (void)insertObject:(id)a0 inLayersAtIndex:(long long)a1;
- (BOOL)isAudioAtPath:(id)a0;
- (BOOL)isImageAtPath:(id)a0;
- (BOOL)isMovieAtPath:(id)a0;
- (id)keyedLayers;
- (id)keywordsForPath:(id)a0;
- (id)lastRandomTransition;
- (struct CGPoint { double x0; double x1; })latLongPointForMap:(id)a0 withAttributes:(id)a1;
- (id)latitudeForPath:(id)a0;
- (id)layerForKey:(id)a0;
- (BOOL)layersCanPositionZIndex;
- (id)longitudeForPath:(id)a0;
- (unsigned long long)loopingMode;
- (id)mainLayers;
- (long long)mapLevelForPath:(id)a0;
- (long long)mediaTypeForPath:(id)a0;
- (void)moveExternalPathsFromDirectory:(id)a0 toDirectory:(id)a1 remap:(BOOL)a2 options:(id)a3;
- (void)moveLayersFromIndices:(id)a0 toIndex:(long long)a1;
- (BOOL)nearingEndWithOptions:(id)a0;
- (id)neighborhoodForPath:(id)a0;
- (id)objectInLayersAtIndex:(long long)a0;
- (id)oceanForPath:(id)a0;
- (id)orderedVideoPaths;
- (void)organizeRandomTransitions;
- (id)organizedRandomTransitions;
- (id)outroEffect;
- (id)placeForPath:(id)a0;
- (struct CGPoint { double x0; double x1; })pointForMap:(id)a0 withAttributes:(id)a1;
- (double)posterTime;
- (BOOL)preserveMedia;
- (id)propertiesForMediaPath:(id)a0;
- (id)propertiesForMediaPathAndCreateIfNeeded:(id)a0 withValue:(id)a1 forKey:(id)a2;
- (BOOL)readFromPath:(id)a0 ofType:(id)a1 error:(id *)a2;
- (void)reconnectAllTransitions;
- (id)regionsOfInterestForPath:(id)a0;
- (id)regionsOfInterestForPath:(id)a0 detect:(BOOL)a1;
- (void)removeAllAudioPaths;
- (void)removeAllVideoPaths;
- (void)removeLayerForKey:(id)a0;
- (void)removeLayersAtIndices:(id)a0;
- (void)removeObjectFromLayersAtIndex:(long long)a0;
- (void)removePaths:(id)a0;
- (void)removePropertiesForMediaPath:(id)a0;
- (void)replaceObjectInLayersAtIndex:(long long)a0 withObject:(id)a1;
- (struct CGSize { double x0; double x1; })resolutionForAssetAtPath:(id)a0;
- (struct CGSize { double x0; double x1; })resolutionForPath:(id)a0;
- (void)saveExternalPathsToDirectory:(id)a0 remap:(BOOL)a1 options:(id)a2;
- (BOOL)savesPathsAsAbsolute;
- (void)setAbsolutePath:(id)a0 forKey:(id)a1;
- (void)setAbsoluteStillPath:(id)a0 forKey:(id)a1;
- (void)setAlwaysLookupAbsolutePaths:(BOOL)a0;
- (void)setAssetKeyDelegate:(id)a0;
- (void)setAudioFadeOutDuration:(double)a0;
- (void)setAudioPaths:(id)a0;
- (void)setAudioPlaylist:(id)a0;
- (void)setAuthoringOption:(id)a0 forKey:(id)a1;
- (void)setBackgroundCGColor:(struct CGColor { } *)a0;
- (void)setDocumentAttribute:(id)a0 forKey:(id)a1;
- (void)setDocumentLayerGroup:(id)a0;
- (void)setLastRandomTransition:(id)a0;
- (void)setLayer:(id)a0 forKey:(id)a1;
- (void)setPreserveMedia:(BOOL)a0;
- (void)setProperties:(id)a0 forMediaPath:(id)a1;
- (void)setSavesPathsAsAbsolute:(BOOL)a0;
- (void)setStyleID:(id)a0;
- (void)setTemporarilyCacheAbsolutePaths:(BOOL)a0;
- (void)setVideoPaths:(id)a0;
- (void)setupDocumentLayerGroup;
- (void)setupLayerGroups;
- (double)startTimeForAssetAtPath:(id)a0;
- (double)startTimeForPath:(id)a0;
- (double)stopTimeForAssetAtPath:(id)a0;
- (double)stopTimeForPath:(id)a0;
- (struct CGImage { } *)thumbnailCGImageForAssetAtPath:(id)a0 andSize:(struct CGSize { double x0; double x1; })a1;
- (id)tiledMapPathsForAttributes:(id)a0;
- (id)titleEffect;
- (id)valueInLayersWithName:(id)a0;
- (id)videoPaths;

@end
