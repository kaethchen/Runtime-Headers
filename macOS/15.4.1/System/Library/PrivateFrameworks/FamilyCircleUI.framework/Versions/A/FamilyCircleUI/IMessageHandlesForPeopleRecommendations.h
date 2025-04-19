@interface IMessageHandlesForPeopleRecommendations : NSObject {
    void /* unknown type, empty encoding */ provider;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (void)getRecommendationsWith:(id)a0 completion:(id /* block */)a1;

@end
