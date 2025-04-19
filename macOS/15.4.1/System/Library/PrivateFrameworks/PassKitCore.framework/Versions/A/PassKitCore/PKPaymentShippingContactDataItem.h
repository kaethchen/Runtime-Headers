@class NSString;

@interface PKPaymentShippingContactDataItem : PKPaymentDataItem

@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *phone;
@property (readonly, nonatomic) NSString *name;

+ (long long)dataType;

- (long long)context;
- (id)errors;
- (BOOL)isValidWithError:(id *)a0;
- (id)errorsForContactFields:(id)a0;
- (id)paymentContactFormatErrors;
- (id)requiredContactFields;

@end
