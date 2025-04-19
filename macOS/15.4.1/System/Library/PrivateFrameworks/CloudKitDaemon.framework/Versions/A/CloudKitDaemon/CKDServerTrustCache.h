@interface CKDServerTrustCache : NSObject

+ (void)setFetchAttempt;
+ (id)validatedTrusts;
+ (void)setValidatedTrusts:(id)a0;
+ (BOOL)shouldRefetchTrusts;

@end
