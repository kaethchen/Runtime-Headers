@class NSMutableDictionary;

@interface MRTransitionManager : NSObject {
    NSMutableDictionary *mTransitionSets;
    NSMutableDictionary *mTransitionPools;
}

+ (void)initialize;
+ (id)sharedManager;

- (void)dealloc;
- (void)cleanup;
- (void)releaseResources;
- (id)initWithPaths:(id)a0;
- (BOOL)canHandleKenBurnsForTransitionID:(id)a0;
- (id)descriptionForTransitionID:(id)a0;
- (BOOL)needsSourceLayerImageForPrecomputingForTransitionID:(id)a0;
- (BOOL)needsSourceLayerToBeOpaqueForSimple3DTransitionSubtype:(long long)a0;
- (BOOL)needsTargetLayerImageForPrecomputingForTransitionID:(id)a0;
- (BOOL)needsTargetLayerToBeOpaqueForSimple3DTransitionSubtype:(long long)a0;
- (BOOL)noContentsMotionForTransitionID:(id)a0;
- (void)recycleTransition:(id)a0;
- (id)resourcePathForTransitionID:(id)a0 andResource:(id)a1;
- (id)transitionWithTransitionID:(id)a0;

@end
