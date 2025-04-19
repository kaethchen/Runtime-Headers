@class NSData;

@interface CTSubscriberAlgorithmEAPAKA : CTSubscriberAlgorithm

@property (retain, nonatomic) NSData *rand;
@property (retain, nonatomic) NSData *autn;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
