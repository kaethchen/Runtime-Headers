@class NSString;

@interface FI_TPropertyColumnPreviewDateTextFieldController : FI_TPropertyDateTextFieldController

@property (readonly, nonatomic) NSString *previewOptionKey;
@property (nonatomic, getter=isUserDisabled) BOOL userDisabled;

+ (id)keyPathsForValuesAffectingShouldBeVisible;

- (void).cxx_destruct;
- (BOOL)shouldBeVisible;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (BOOL)shouldFetchWhenDisabled;
- (struct optional<unsigned long> { union { char x0; unsigned long long x1; } x0; BOOL x1; })syncCountThreshold;
- (void)updateDisabledStateForKeys:(id)a0;
- (BOOL)visibleWhileLoadingAsync;

@end
