@class NSTimeZone, NSDate;

@interface PKPaymentDateDataItem : PKPaymentDataItem

@property (retain, nonatomic) NSDate *paymentDate;
@property (retain, nonatomic) NSTimeZone *paymentTimeZone;
@property (nonatomic) long long paymentFrequency;

+ (long long)dataType;

- (long long)context;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (BOOL)isValidWithError:(id *)a0;

@end
