@class NSString, PKPaymentSetupFieldPicker;

@interface PKPaymentSetupFieldPickerItem : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *submissionValue;
@property (readonly, copy, nonatomic) NSString *submissionConfirmationTitle;
@property (readonly, copy, nonatomic) NSString *submissionConfirmationDescription;
@property (readonly, copy, nonatomic) PKPaymentSetupFieldPicker *nextLevelPicker;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithName:(id)a0 value:(id)a1;

@end
