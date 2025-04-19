@interface ImagePlaygroundInternal.VFXSceneManager : NSObject <VFXWorldRendererDelegate> {
    void /* unknown type, empty encoding */ magicEffectPosition;
    void /* unknown type, empty encoding */ transitionToImageDuration;
    void /* unknown type, empty encoding */ isShowingError;
    void /* unknown type, empty encoding */ isForStickers;
    void /* unknown type, empty encoding */ isCreating;
    void /* unknown type, empty encoding */ world;
    void /* unknown type, empty encoding */ effectType;
    void /* unknown type, empty encoding */ areAttractorsEnabled;
    void /* unknown type, empty encoding */ isRightToLeft;
    void /* unknown type, empty encoding */ requiresManualShutdown;
    void /* unknown type, empty encoding */ effectImage;
    void /* unknown type, empty encoding */ animationCoordinator;
    void /* unknown type, empty encoding */ isAnimatingVisibility;
    void /* unknown type, empty encoding */ isAnimatingBlobToPictureTarget;
    void /* unknown type, empty encoding */ currentAnimatingVisibilityUUID;
    void /* unknown type, empty encoding */ wandPoint;
    void /* unknown type, empty encoding */ wandPathPoints;
    void /* unknown type, empty encoding */ didBegin;
    void /* unknown type, empty encoding */ pathStartTime;
    void /* unknown type, empty encoding */ nodesController;
    void /* unknown type, empty encoding */ attractorsColorUpdatingDelegate;
    void /* unknown type, empty encoding */ lastAttractorColorUpdateTime;
    void /* unknown type, empty encoding */ minimalAttractorColorUpdateInterval;
    void /* unknown type, empty encoding */ attractorsIndices;
    void /* unknown type, empty encoding */ attractorsMapper;
    void /* unknown type, empty encoding */ vfxPath;
    void /* unknown type, empty encoding */ pathTexture;
}

- (id)init;
- (void).cxx_destruct;
- (void)renderer:(id)a0 updateAtTime:(double)a1;

@end
