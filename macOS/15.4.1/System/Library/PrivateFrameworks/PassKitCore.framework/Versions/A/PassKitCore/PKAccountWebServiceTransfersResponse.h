@class NSArray;

@interface PKAccountWebServiceTransfersResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *transfers;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithData:(id)a0 account:(id)a1 request:(id)a2;

@end
