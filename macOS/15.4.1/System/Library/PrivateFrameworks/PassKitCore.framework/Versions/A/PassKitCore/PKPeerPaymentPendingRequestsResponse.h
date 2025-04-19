@class NSArray;

@interface PKPeerPaymentPendingRequestsResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *requestSummaries;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
