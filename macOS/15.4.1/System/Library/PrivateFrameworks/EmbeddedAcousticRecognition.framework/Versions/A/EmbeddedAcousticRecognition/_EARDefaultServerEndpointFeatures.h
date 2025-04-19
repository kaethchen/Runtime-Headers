@interface _EARDefaultServerEndpointFeatures : NSObject

@property (nonatomic) long long wordCount;
@property (nonatomic) long long trailingSilenceDuration;
@property (nonatomic) float endOfSentenceLikelihood;
@property (nonatomic) float acousticEndpointerScore;
@property (nonatomic) float silencePosterior;

- (id)initWithWordCount:(long long)a0 trailingSilenceDuration:(long long)a1 endOfSentenceLikelihood:(float)a2 acousticEndpointerScore:(float)a3 silencePosterior:(float)a4;
- (id)initWithWordCount:(long long)a0 trailingSilenceDuration:(long long)a1 endOfSentenceLikelihood:(float)a2 silencePosterior:(float)a3;

@end
