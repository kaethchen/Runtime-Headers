@class SCNNode, NSString, SCNMaterial, SCNScene, AVTAvatar;
@protocol SCNSceneRenderer;

@interface AVTAvatarEnvironment : NSObject {
    SCNScene *_scene;
    id<SCNSceneRenderer> _renderer;
    AVTAvatar *_avatar;
    SCNMaterial *_shadowPlaneMaterial;
    SCNNode *_whitePlane;
    SCNNode *_environmentNode;
    SCNNode *_defaultPointOfView;
    NSString *_framingMode;
    SCNNode *_animojiCamera;
    SCNNode *_memojiCameraGroup;
    SCNNode *_customCamera;
    SCNNode *_specializedLightingNode;
    SCNNode *_defaultLightingNode;
}

@property (copy, nonatomic) NSString *framingMode;
@property (readonly, nonatomic) SCNNode *environmentNode;
@property (readonly, nonatomic) SCNNode *currentPointOfView;
@property (readonly, nonatomic) SCNNode *defaultPointOfView;
@property (nonatomic) float fadeFactor;
@property (readonly, nonatomic) BOOL faceIsFullyVisible;

- (void).cxx_destruct;
- (void)didSnapshot;
- (void)willSnapshot;
- (id)initAndInstallInScene:(id)a0 renderer:(id)a1;
- (void)avatarDidChange:(id)a0 presentationConfiguration:(id)a1;
- (id)defaultEnvironmentNode;
- (id)pointOfViewForFramingMode:(id)a0;
- (void)setEnablePhysicsSimulation:(BOOL)a0;
- (void)setFramingMode:(id)a0 animationDuration:(double)a1;
- (void)setFramingModeForcingPointOfViewUpdate:(id)a0;
- (void)updateCustomCameras;
- (void)updatePointOfViewFromFramingMode;
- (void)updateSpecializedLighting;
- (void)updateWithPresentationConfiguration:(id)a0;

@end
