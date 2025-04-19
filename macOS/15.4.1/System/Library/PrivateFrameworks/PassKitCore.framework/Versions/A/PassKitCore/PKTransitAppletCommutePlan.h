@class NSString, NSDate;

@interface PKTransitAppletCommutePlan : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *expirationDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0 uniqueIdentifier:(id)a1 startDate:(id)a2 expirationDate:(id)a3 status:(unsigned long long)a4;
- (BOOL)isEqualToCommutePlan:(id)a0;

@end
