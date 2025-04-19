@class MPMediaQuery, MPMediaItem;

@interface MPCAssistantQueryPlaybackQueue : MPCAssistantPlaybackQueue

@property (readonly, nonatomic) MPMediaQuery *query;
@property (retain, nonatomic) MPMediaItem *firstItem;
@property (nonatomic) long long shuffleType;

+ (id)queryQueueWithContextID:(id)a0 query:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)getPlaybackQueueWithDestination:(id)a0 completion:(id /* block */)a1;
- (id)initWithContextID:(id)a0 query:(id)a1;

@end
