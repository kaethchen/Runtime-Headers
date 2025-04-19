@interface WFMissingAction : WFAction

@property (nonatomic) BOOL isForLocalization;

- (id)localizedNameWithContext:(id)a0;
- (id)iconImage;
- (void)runWithInput:(id)a0 error:(id *)a1;
- (BOOL)inputPassthrough;
- (BOOL)requiresRemoteExecution;
- (id)localizedDescriptionSummary;
- (BOOL)isMissing;

@end
