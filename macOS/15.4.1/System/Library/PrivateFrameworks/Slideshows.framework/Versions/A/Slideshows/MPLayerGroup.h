@class NSString, NSArray, NSColor, NSDictionary, NSMutableDictionary, NSMutableArray, MPLayerGroupInternal, MCContainerParallelizer, MCPlugParallel, MPAudioPlaylist;

@interface MPLayerGroup : NSObject <MPActionableSupportInternal, MPNavigatorSupportInternal, MPLayerableSupportInternal, NSSecureCoding, NSCopying, MPAnimationSupport, MPActionableSupport, MPAudioSupport, MPLayerableSupport, MPNavigatorSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport, MPAutomaticLayerSupport, MPManualLayerSupport> {
    MPLayerGroupInternal *_internal;
    NSMutableArray *_userProvidedVideoPaths;
    NSMutableArray *_userProvidedAudioPaths;
    MCPlugParallel *_plug;
    MCContainerParallelizer *_parallelizer;
    MPAudioPlaylist *_audioPlaylist;
    NSMutableArray *_layers;
    NSMutableDictionary *_layerDictionary;
    id _parent;
    NSMutableDictionary *_authoringOptions;
    NSMutableDictionary *_animationPaths;
    NSMutableDictionary *_actions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long loopingMode;
@property (copy, nonatomic) NSColor *backgroundColor;
@property (nonatomic) struct CGColor { } *backgroundCGColor;
@property (copy, nonatomic) NSArray *videoPaths;
@property (copy, nonatomic) NSArray *audioPaths;
@property (nonatomic) BOOL autoAdjustDuration;
@property (readonly, nonatomic) NSString *uuid;
@property (nonatomic) NSDictionary *initialState;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)cleanup;
- (id)container;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (id)parent;
- (struct CGSize { double x0; double x1; })size;
- (double)duration;
- (struct CGPoint { double x0; double x1; })position;
- (double)scale;
- (void)setDuration:(double)a0;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setScale:(double)a0;
- (id)actions;
- (id)objectID;
- (id)backgroundColor;
- (double)opacity;
- (id)actionForKey:(id)a0;
- (void)addLayer:(id)a0;
- (id)observer;
- (void)setBackgroundColor:(id)a0;
- (void)setContainer:(id)a0;
- (void)setNumberOfLoops:(double)a0;
- (void)setOpacity:(double)a0;
- (void)setZIndex:(long long)a0;
- (void)setZPosition:(double)a0;
- (long long)zIndex;
- (double)zPosition;
- (double)rotationAngle;
- (void)setParent:(id)a0;
- (void)setRotationAngle:(double)a0;
- (id)layers;
- (id)styleID;
- (void)addLayers:(id)a0;
- (double)numberOfLoops;
- (void)removeAllLayers;
- (void)removePath:(id)a0;
- (double)videoDuration;
- (void)removeActionForKey:(id)a0;
- (id)allEffects;
- (void)setIsTriggered:(BOOL)a0;
- (BOOL)isTriggered;
- (void)setAction:(id)a0 forKey:(id)a1;
- (id)parentDocument;
- (id)audioPlaylist;
- (void)setLoopingMode:(unsigned long long)a0;
- (double)durationPadding;
- (double)phaseInDuration;
- (id)absoluteVideoPaths;
- (id)actionableObjectForID:(id)a0;
- (void)addAudioPath:(id)a0;
- (void)addAudioPaths:(id)a0;
- (void)addVideoPath:(id)a0;
- (void)addVideoPaths:(id)a0;
- (id)allEffectContainers;
- (id)allSlides:(BOOL)a0;
- (id)allSongs;
- (id)animationPathForKey:(id)a0;
- (id)animationPaths;
- (double)aspectRatioDidChange:(double)a0 atTime:(double)a1;
- (id)audioPaths;
- (id)authoredVersionInfo;
- (id)authoringOptionForKey:(id)a0;
- (id)authoringOptions;
- (BOOL)autoAdjustDuration;
- (struct CGColor { } *)backgroundCGColor;
- (void)cachePaths;
- (void)configureActions;
- (void)copyActions:(id)a0;
- (void)copyAnimationPaths:(id)a0;
- (void)copyAudioPlaylist:(id)a0;
- (void)copyLayerDictionary:(id)a0;
- (void)copyLayers:(id)a0;
- (void)copyStruct:(id)a0;
- (long long)countOfLayers;
- (BOOL)detectFacesInBackground;
- (void)insertLayers:(id)a0 atIndex:(long long)a1;
- (void)insertObject:(id)a0 inLayersAtIndex:(long long)a1;
- (id)keyedLayers;
- (long long)lastSlideUsed;
- (id)layerForKey:(id)a0;
- (id)layerKey;
- (id)layerKeyDictionary;
- (BOOL)layersCanPositionZIndex;
- (id)liveLock;
- (unsigned long long)loopingMode;
- (id)mainLayers;
- (void)moveLayersFromIndices:(id)a0 toIndex:(long long)a1;
- (id)navigatorKey;
- (BOOL)nearingEndWithOptions:(id)a0;
- (id)objectInLayersAtIndex:(long long)a0;
- (id)orderedVideoPaths;
- (double)phaseOutDuration;
- (id)plug;
- (id)plugID;
- (double)posterTime;
- (void)reconfigureLoopingMode;
- (void)reconnectAll;
- (void)removeAllAudioPaths;
- (void)removeAllVideoPaths;
- (void)removeAnimationPathForKey:(id)a0;
- (void)removeLayerForKey:(id)a0;
- (void)removeLayersAtIndices:(id)a0;
- (void)removeObjectFromLayersAtIndex:(long long)a0;
- (void)removePaths:(id)a0;
- (void)replaceObjectInLayersAtIndex:(long long)a0 withObject:(id)a1;
- (void)resetDuration;
- (void)setAnimationPath:(id)a0 forKey:(id)a1;
- (void)setAudioPaths:(id)a0;
- (void)setAudioPlaylist:(id)a0;
- (void)setAuthoredVersionInfo:(id)a0;
- (void)setAuthoringOption:(id)a0 forKey:(id)a1;
- (void)setAuthoringOptions:(id)a0;
- (void)setAutoAdjustDuration:(BOOL)a0;
- (void)setBackgroundCGColor:(struct CGColor { } *)a0;
- (void)setBackgroundColorString:(id)a0;
- (void)setDurationPadding:(double)a0;
- (void)setIsDocumentLayerGroup:(BOOL)a0;
- (void)setLastSlideUsed:(long long)a0;
- (void)setLayer:(id)a0 forKey:(id)a1;
- (void)setPhaseInDuration:(double)a0;
- (void)setPhaseOutDuration:(double)a0;
- (void)setPlug:(id)a0;
- (void)setStartsPaused:(BOOL)a0;
- (unsigned long long)setStyleID:(id)a0;
- (void)setTimeIn:(double)a0;
- (void)setUsedAllPaths:(BOOL)a0;
- (void)setVideoPaths:(id)a0;
- (void)setXRotationAngle:(double)a0;
- (void)setYRotationAngle:(double)a0;
- (BOOL)startsPaused;
- (double)timeIn;
- (id)valueInLayersWithName:(id)a0;
- (id)videoPaths;
- (double)xRotationAngle;
- (double)yRotationAngle;

@end
