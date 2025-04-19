@class NSDictionary, AMSURLRequest;

@interface AMSURLRequestEncoderResult : NSObject

@property (readonly, nonatomic) AMSURLRequest *request;
@property (readonly, nonatomic) NSDictionary *signingErrors;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 signingErrors:(id)a1;

@end
