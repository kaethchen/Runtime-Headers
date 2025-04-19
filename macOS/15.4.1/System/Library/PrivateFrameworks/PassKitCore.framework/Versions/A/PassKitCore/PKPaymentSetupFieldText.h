@class NSString, NSArray, NSRegularExpression, NSNumberFormatter, NSCharacterSet;

@interface PKPaymentSetupFieldText : PKPaymentSetupField {
    NSNumberFormatter *_currencyFormatter;
    NSNumberFormatter *_amountFormatter;
    NSCharacterSet *_allowedCharacters;
}

@property (nonatomic) unsigned long long minLength;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic, getter=isSecureText) BOOL secureText;
@property (nonatomic, getter=isSecureVisibleText) BOOL secureVisibleText;
@property (nonatomic, getter=isNumeric) BOOL numeric;
@property (nonatomic, getter=isNumericFractional) BOOL numericFractional;
@property (nonatomic, getter=useLuhnCheck) BOOL luhnCheck;
@property (copy, nonatomic) NSString *displayFormatPlaceholder;
@property (copy, nonatomic) NSString *currencyCode;
@property (nonatomic) BOOL keepPaddingCharactersForSubmission;
@property (retain, nonatomic) NSArray *paddingCharacters;
@property (nonatomic) unsigned long long alignment;
@property (copy, nonatomic) NSRegularExpression *validationRegex;
@property (nonatomic) long long codeOnError;
@property (retain, nonatomic) NSArray *keyboardAccessories;
@property (copy, nonatomic) NSCharacterSet *allowedCharacters;

+ (id)readOnlyPaymentSetupFieldWithDisplayName:(id)a0 value:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)decimalSeparator;
- (void)setCurrentValue:(id)a0;
- (void)setDefaultValue:(id)a0;
- (unsigned long long)fieldType;
- (id)displayString;
- (void)updateWithConfiguration:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)_allowedCharacters;
- (id)_amountFormatter;
- (id)_currencyFormatter;
- (id)_stringByApplyingCurrencyFormatter:(id)a0 allowPartialFractional:(BOOL)a1;
- (id)_stringByApplyingNumericFractionalFormat:(id)a0;
- (id)_submissionStringForValue:(id)a0;
- (id)displayFormatPaddingCharacters;
- (BOOL)hasDisplayFormat;
- (id)stringByApplyingDisplayFormat:(id)a0;
- (id)stringByApplyingDisplayFormat:(id)a0 allowPartialFractional:(BOOL)a1;
- (BOOL)submissionStringMeetsAllRequirements;
- (BOOL)submissionStringMeetsValidationRegex;
- (void)updateDisplayFormat:(id)a0;

@end
