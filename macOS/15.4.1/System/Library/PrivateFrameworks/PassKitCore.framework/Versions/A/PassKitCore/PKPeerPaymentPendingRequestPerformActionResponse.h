@class NSString;

@interface PKPeerPaymentPendingRequestPerformActionResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSString *status;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
