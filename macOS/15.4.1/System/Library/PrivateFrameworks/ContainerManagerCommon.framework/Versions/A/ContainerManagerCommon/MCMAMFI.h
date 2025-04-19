@class NSString;

@interface MCMAMFI : NSObject <MCMAMFI> {
    Class _lwcrClass;
}

@property (retain, nonatomic, setter=setLWCRClass:) Class lwcrClass;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)_encodeRequirement:(id)a0 name:(id)a1;
- (id)_encodedQueriesWithContainerConfig:(id)a0 teamID:(id)a1;
- (id)_requirementForProfileValidatedEntitlements;
- (id)_requirementForTeamID:(id)a0;
- (id)_requirementForValidationCategory:(id)a0;
- (id)_requirementForiOSPlatform;
- (Class)lwcrClass;
- (BOOL)signaturePassesStrictScrutinyForAppGroupEntitlementWithContainerConfig:(id)a0 teamID:(id)a1;

@end
