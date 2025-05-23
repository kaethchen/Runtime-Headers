@class AVPlayerView, NSString;

@interface AVDefaultBehaviorContext : NSObject <AVBehaviorContext>

@property (readonly, weak, nonatomic) AVPlayerView *playerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAVKitOwner:(id)a0;

@end
