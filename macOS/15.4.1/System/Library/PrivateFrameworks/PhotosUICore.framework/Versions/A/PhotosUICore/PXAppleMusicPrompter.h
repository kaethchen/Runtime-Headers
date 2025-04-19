@protocol PXAppleMusicStatusProvider;

@interface PXAppleMusicPrompter : NSObject

@property (readonly, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) id<PXAppleMusicStatusProvider> appleMusicStatusProvider;

+ (void)showPromptsIfNeededWithCompletion:(id /* block */)a0;

- (void).cxx_destruct;
- (void)_start;
- (id)initWithCompletion:(id /* block */)a0;
- (void)_handleAppleMusicPlaybackStatus:(long long)a0 error:(id)a1;
- (void)_handleTCCAccessResult:(unsigned char)a0;
- (void)_promptingFinished;
- (void)_requestAppleMusicPlaybackStatus;
- (void)_requestAppleMusicTCCAccessIfNeeded;

@end
