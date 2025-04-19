@interface FI_TPropertyColumnPreviewLastOpenedDateController : FI_TPropertyColumnPreviewDateTextFieldController

@property (nonatomic) BOOL alwaysShow;

- (BOOL)hasValue;
- (void)initCommon;
- (BOOL)shouldBeVisible;
- (BOOL)shouldFetchWhenDisabled;

@end
