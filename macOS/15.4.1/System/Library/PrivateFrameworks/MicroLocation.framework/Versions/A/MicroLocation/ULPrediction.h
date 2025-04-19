@class NSArray, NSUUID, NSError, NSDate;

@interface ULPrediction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *places;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSUUID *requestIdentifier;
@property (retain, nonatomic) NSDate *time;
@property (nonatomic) unsigned long long confidence;
@property (retain, nonatomic) NSArray *confidenceReasons;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlaces:(id)a0 error:(id)a1 requestIdentifier:(id)a2 time:(id)a3 confidence:(unsigned long long)a4 confidenceReasons:(id)a5;

@end
