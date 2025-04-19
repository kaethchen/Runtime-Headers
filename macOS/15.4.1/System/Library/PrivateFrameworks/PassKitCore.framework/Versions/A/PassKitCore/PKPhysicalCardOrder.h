@class NSString;

@interface PKPhysicalCardOrder : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long reason;
@property (copy, nonatomic) NSString *nameOnCard;
@property (copy, nonatomic) NSString *artworkIdentifier;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
