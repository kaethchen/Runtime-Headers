@class NSArray, NSDate;

@interface PKPaymentTransactionQuestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) BOOL answered;
@property (nonatomic) BOOL answeredOnThisDevice;
@property (readonly, nonatomic) NSArray *allowedAnswers;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToQuestion:(id)a0;

@end
