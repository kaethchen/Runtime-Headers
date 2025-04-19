@class SFPasswordAssistantInspectorController, SFPasswordStrengthTextField, NSTextField;

@interface SFPasswordStrengthController : SFPasswordAsstController {
    NSTextField *_pwStrengthStr;
    SFPasswordStrengthTextField *_pwStrengthTitleStr;
    SFPasswordAssistantInspectorController *insp;
    struct _NSRange { unsigned long long location; unsigned long long length; } _pwdStrengthWeakRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _pwdStrengthFairRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _pwdStrengthGoodRange;
    unsigned long long _pwdStrengthExcellent;
}

- (id)init;
- (void)_pwaDidUpdateNewPasswordField:(id)a0;
- (void)_reCalcQualityBarWidth;
- (void)_setInspectorController:(id)a0;
- (void)_setPasswordStrengthString:(id)a0;
- (void)_setPasswordStrengthTitleString:(id)a0;
- (void)_setPasswordStrengthTitleToolTip:(id)a0;
- (void)controlTextDidCh:(id)a0;
- (void)setExcellentEntropy:(unsigned long long)a0;
- (void)setFairEntropyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setGoodEntropyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setNewPasswordField:(id)a0;
- (void)setWeakEntropyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)updateStrengthBar:(id)a0;

@end
