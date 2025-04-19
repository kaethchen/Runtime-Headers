@interface FedStatsCohortGeohash : NSObject <FedStatsCohortQueryProtocol>

@property (readonly, nonatomic) unsigned long long precision;

+ (id)cohortInstanceWithPrecision:(unsigned long long)a0;

- (id)cohortKeyForParameters:(id)a0 possibleError:(id *)a1;
- (id)initWithPrecision:(unsigned long long)a0;

@end
