@class NSString, NSDictionary, NSArray;
@protocol NSObject, NSCopying;

@interface PKPaymentSetupField : NSObject <NSCopying>

@property (copy, nonatomic) NSString *localizedPlaceholder;
@property (copy, nonatomic) NSString *displayFormat;
@property (nonatomic, getter=isOptional) BOOL optional;
@property (copy, nonatomic) NSString *submissionKey;
@property (copy, nonatomic) NSString *submissionDestination;
@property (nonatomic) BOOL requiresSecureSubmission;
@property (readonly, copy, nonatomic) NSDictionary *rawConfigurationDictionary;
@property (readonly, nonatomic, getter=isBuiltIn) BOOL builtIn;
@property (copy, nonatomic) NSString *defaultValue;
@property (nonatomic) BOOL populateFromMeCard;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isReadonly) BOOL readonly;
@property (nonatomic) unsigned long long source;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long fieldType;
@property (copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *compactLocalizedDisplayName;
@property (readonly, nonatomic) long long groupNumber;
@property (copy, nonatomic) id<NSObject, NSCopying> currentValue;
@property (copy, nonatomic) id<NSObject, NSCopying> originalCameraCaptureValue;
@property (nonatomic, getter=isCurrentValueFromCameraCapture) BOOL currentValueFromCameraCapture;
@property (readonly, copy, nonatomic) NSString *odiAttribute;
@property (readonly, copy, nonatomic) NSArray *requirements;
@property (readonly, nonatomic) BOOL supportsAddressAutofill;

+ (Class)classForIdentifier:(id)a0 type:(unsigned long long)a1;
+ (id)newRandomlyGeneratedField;
+ (id)paymentSetupFieldWithIdentifier:(id)a0;
+ (id)paymentSetupFieldWithIdentifier:(id)a0 configuration:(id)a1;
+ (id)paymentSetupFieldWithIdentifier:(id)a0 type:(unsigned long long)a1;
+ (id)sampleCustomPaymentSetupFields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)displayString;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1;
- (void)updateWithConfiguration:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)dateFieldObject;
- (BOOL)isFieldTypeText;
- (BOOL)isFieldTypeDate;
- (id)textFieldObject;
- (void)_setLocalizedDisplayName:(id)a0;
- (BOOL)_shouldStripDiacritics;
- (id)_submissionStringForValue:(id)a0;
- (id)footerFieldObject;
- (BOOL)isFieldTypeFooter;
- (BOOL)isFieldTypeLabel;
- (BOOL)isFieldTypePicker;
- (id)labelFieldObject;
- (void)noteCurrentValueChanged;
- (id)pickerFieldObject;
- (BOOL)preventVoiceOver;
- (id)submissionString;
- (BOOL)submissionStringMeetsAllRequirements;
- (BOOL)submissionStringMeetsValidationRegex;

@end
