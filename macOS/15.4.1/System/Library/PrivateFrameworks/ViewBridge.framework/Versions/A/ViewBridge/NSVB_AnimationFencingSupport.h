@interface NSVB_AnimationFencingSupport : NSObject

+ (unsigned int)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)a0 andPreCommitHandler:(id /* block */)a1;
+ (void)_animateWithAttributes:(id)a0 animations:(id /* block */)a1;
+ (id)_currentAnimationAttributes:(BOOL)a0;
+ (id)_fenceContext;
+ (unsigned int)_synchronizeInLiveResize:(BOOL)a0 withPreCommitHandler:(id /* block */)a1;
+ (void)_synchronizeOverPort:(unsigned int)a0;

@end
