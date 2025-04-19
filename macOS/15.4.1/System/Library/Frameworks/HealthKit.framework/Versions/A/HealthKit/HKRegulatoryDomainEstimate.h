@class NSString, NSDate;

@interface HKRegulatoryDomainEstimate : NSObject <NSCopying, HKCurrentCountryCode>

@property (readonly, copy, nonatomic) NSString *ISOCode;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) long long provenance;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithISOCode:(id)a0 timestamp:(id)a1 provenance:(long long)a2;

@end
