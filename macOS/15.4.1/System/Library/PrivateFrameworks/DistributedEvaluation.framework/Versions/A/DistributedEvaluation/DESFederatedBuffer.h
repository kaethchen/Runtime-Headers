@interface DESFederatedBuffer : NSObject

+ (id)computeApproximateStaleness:(double)a0 stalenessScale:(id)a1 stalenessBias:(id)a2;
+ (id)computeDownScalingFactor:(id)a0 approximateStaleness:(id)a1;

@end
