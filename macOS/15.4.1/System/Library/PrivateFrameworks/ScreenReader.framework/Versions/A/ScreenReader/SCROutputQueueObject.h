@class SCROutputRequest, NSString;

@interface SCROutputQueueObject : NSObject

@property (retain, nonatomic) SCROutputRequest *outputRequest;
@property (copy, nonatomic) NSString *outputIdentifier;
@property (readonly, nonatomic) unsigned long long requestID;
@property (readonly, copy, nonatomic) NSString *queueIdentifier;

- (void).cxx_destruct;
- (id)initWithOutputRequest:(id)a0;

@end
