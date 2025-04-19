@class NSString, NSTimeZone, NSDate;

@interface PKAccountTransferScheduleDetails : NSObject <NSSecureCoding> {
    NSTimeZone *_productTimeZone;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long frequency;
@property (nonatomic) long long scheduledDay;
@property (copy, nonatomic) NSDate *scheduledDate;
@property (copy, nonatomic) NSString *transferTermsIdentifier;

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
