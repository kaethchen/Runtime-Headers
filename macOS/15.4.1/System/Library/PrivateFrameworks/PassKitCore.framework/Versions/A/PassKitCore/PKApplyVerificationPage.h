@interface PKApplyVerificationPage : PKApplyRequiredFieldsPage

@property (readonly, nonatomic) unsigned long long verificationType;
@property (readonly, nonatomic) unsigned long long verificationCodeLength;

- (id)initWithDictionary:(id)a0 type:(unsigned long long)a1 codeLength:(unsigned long long)a2 fieldOptions:(id)a3;
- (id)initWithDictonary:(id)a0;

@end
