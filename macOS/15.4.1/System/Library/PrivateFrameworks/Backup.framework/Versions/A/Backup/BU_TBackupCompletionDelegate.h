@class NSString, BU_TBackupView, BU_TBackupLayer;

@interface BU_TBackupCompletionDelegate : NSObject <CAAnimationDelegate> {
    int fAnimationKind;
    BU_TBackupView *fLayerView;
    BU_TBackupLayer *fLayer;
    NSString *fKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)hideTopSnapshotComplete;
- (id)init:(int)a0 withObject:(id)a1 forKey:(id)a2;
- (id)initWithAnimationKind:(int)a0 withView:(id)a1 withAnimationID:(id)a2 forLayer:(id)a3;
- (void)prepareToRevealInAnimationComplete;
- (void)promoteDemoteSnapshotAnimationComplete;
- (void)revealInAnimationComplete;
- (void)revealOutAnimationComplete;
- (void)showTopSnapshotComplete;

@end
