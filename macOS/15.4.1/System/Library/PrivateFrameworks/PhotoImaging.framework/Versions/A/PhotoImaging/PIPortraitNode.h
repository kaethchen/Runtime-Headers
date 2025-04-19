@class NURenderNode;

@interface PIPortraitNode : NURenderNode

@property (readonly, nonatomic) NURenderNode *input;
@property (readonly, nonatomic) NURenderNode *blurMap;

+ (id)vectorWithFloats:(id)a0;
+ (BOOL)isPortraitMonoEffect:(id)a0;
+ (BOOL)isPortraitStageEffect:(id)a0;

- (id)uniqueInputNode;
- (id)_evaluateImageProperties:(out id *)a0;
- (BOOL)canPropagateOriginalAuxiliaryData:(long long)a0;
- (BOOL)shouldDisableGainMap;

@end
