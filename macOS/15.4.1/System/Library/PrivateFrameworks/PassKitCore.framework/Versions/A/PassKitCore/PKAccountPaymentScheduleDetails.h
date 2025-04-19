@class NSString, NSTimeZone, NSDate;

@interface PKAccountPaymentScheduleDetails : NSObject <NSSecureCoding> {
    NSTimeZone *_productTimeZone;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long frequency;
@property (nonatomic) long long scheduledDay;
@property (nonatomic) long long preset;
@property (copy, nonatomic) NSDate *scheduledDate;
@property (copy, nonatomic) NSString *paymentTermsIdentifier;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)hashString;
- (id)jsonString;
- (id)jsonDictionaryRepresentation;
- (id)initWithDictionary:(id)a0 productTimeZone:(id)a1;
- (void)setScheduleTimeZone:(id)a0;

@end
