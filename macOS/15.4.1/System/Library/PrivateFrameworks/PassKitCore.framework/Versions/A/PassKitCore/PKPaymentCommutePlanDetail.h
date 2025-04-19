@class NSString, NSDate;

@interface PKPaymentCommutePlanDetail : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) long long value;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSDate *lastUpdateDate;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *expiryDate;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long planType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithAppletCommutePlan:(id)a0 label:(id)a1 value:(id)a2;
- (id)initWithIdentifier:(id)a0 uniqueIdentifier:(id)a1 startDate:(id)a2 expiryDate:(id)a3 title:(id)a4 description:(id)a5;
- (id)initWithTransitCommutePlan:(id)a0;

@end
