@interface CSEnhancedEndpointerFeatures : NSObject

@property (readonly, nonatomic) long long trailingSilenceDuration;
@property (readonly, nonatomic) double clientSilenceFramesCount;
@property (readonly, nonatomic) double endOfSentenceLikelihood;
@property (readonly, nonatomic) long long wordCount;
@property (readonly, nonatomic) double serverFeaturesLatency;
@property (readonly, nonatomic) double clientSilenceProbability;
@property (readonly, nonatomic) long long rcTrailingSilenceDuration;
@property (readonly, nonatomic) double rcEndOfSentenceLikelihood;
@property (readonly, nonatomic) long long rcWordCount;
@property (readonly, nonatomic) double rcServerFeaturesLatency;
@property (readonly, nonatomic) double silencePosterior;
@property (readonly, nonatomic) double acousticEndpointerScore;
@property (readonly, nonatomic) float silencePosteriorNF;

- (id)initWithTrailingSilenceDuration:(long long)a0 clientSilenceFramesCount:(double)a1 endOfSentenceLikelihood:(double)a2 wordCount:(long long)a3 serverFeaturesLatency:(double)a4 clientSilenceProbability:(double)a5 rcTrailingSilenceDuration:(long long)a6 rcEndOfSentenceLikelihood:(double)a7 rcWordCount:(long long)a8 rcServerFeaturesLatency:(double)a9 silencePosterior:(double)a10 acousticEndpointerScore:(double)a11 silencePosteriorNF:(float)a12;
- (id)toFeatureArray;

@end
