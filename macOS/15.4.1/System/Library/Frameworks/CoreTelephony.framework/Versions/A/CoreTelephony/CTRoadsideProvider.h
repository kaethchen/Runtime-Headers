@class NSString, NSArray;

@interface CTRoadsideProvider : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long providerId;
@property (retain, nonatomic) NSString *providerName;
@property (retain, nonatomic) NSString *bizId;
@property (nonatomic) BOOL supportsPayPerUse;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isCarrierProvider;
@property (retain, nonatomic) NSArray *associatedPhoneNumbers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToProvider:(id)a0;

@end
