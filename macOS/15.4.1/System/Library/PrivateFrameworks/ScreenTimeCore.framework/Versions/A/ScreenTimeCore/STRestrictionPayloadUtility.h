@interface STRestrictionPayloadUtility : NSObject <STRestrictionPayloadUtilityProtocol>

+ (id)create;

- (id)init;
- (void).cxx_destruct;
- (id)buildUpdatedDeclarationsWithImageGenerationAllowed:(BOOL)a0 originalDeclarations:(id)a1;
- (id)getAppsRatingFromPayloadPlist:(id)a0 error:(id *)a1;

@end
