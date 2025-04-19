@class NSString;

@interface FedStatsCohortQueryDeviceType : NSObject <FedStatsCohortQueryProtocol>

@property (retain) NSString *deviceType;

+ (id)cohortInstance;

- (void).cxx_destruct;
- (id)initWithDeviceType:(id)a0;
- (id)cohortKeyForParameters:(id)a0 possibleError:(id *)a1;

@end
