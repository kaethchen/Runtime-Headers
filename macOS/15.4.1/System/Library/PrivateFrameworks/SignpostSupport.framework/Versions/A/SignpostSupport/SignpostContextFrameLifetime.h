@class SignpostContextInfo, SignpostFrameLifetimeInterval;

@interface SignpostContextFrameLifetime : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata>

@property (readonly, nonatomic) unsigned int frameSeed;
@property (readonly, nonatomic) SignpostFrameLifetimeInterval *parentFrameLifetime;
@property (readonly, nonatomic) SignpostContextInfo *contextInfo;

- (void).cxx_destruct;
- (id)initWithFrameLifetime:(id)a0 contextInfo:(id)a1;

@end
