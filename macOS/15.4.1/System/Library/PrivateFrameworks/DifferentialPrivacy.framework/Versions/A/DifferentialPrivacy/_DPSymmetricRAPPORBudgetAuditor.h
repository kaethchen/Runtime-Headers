@interface _DPSymmetricRAPPORBudgetAuditor : _DPBudgetAuditor

@property (readonly, nonatomic) BOOL auditedFromPlist;

- (id)auditedMetadataWithError:(id *)a0;
- (id)initWithMetadata:(id)a0 plistParameters:(id)a1 error:(id *)a2;

@end
