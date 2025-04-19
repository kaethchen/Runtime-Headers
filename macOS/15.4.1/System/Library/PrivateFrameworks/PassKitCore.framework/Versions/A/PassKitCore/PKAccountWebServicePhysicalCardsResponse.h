@class NSSet;

@interface PKAccountWebServicePhysicalCardsResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) NSSet *physicalCards;
@property (readonly, nonatomic) NSSet *expirationMessaging;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
