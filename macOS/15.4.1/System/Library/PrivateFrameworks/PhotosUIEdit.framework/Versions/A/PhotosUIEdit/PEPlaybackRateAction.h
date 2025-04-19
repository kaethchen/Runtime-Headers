@interface PEPlaybackRateAction : PEEditAction

@property (nonatomic) float playbackRate;

- (long long)actionType;
- (void)applyToLoadResult:(id)a0 completion:(id /* block */)a1;

@end
