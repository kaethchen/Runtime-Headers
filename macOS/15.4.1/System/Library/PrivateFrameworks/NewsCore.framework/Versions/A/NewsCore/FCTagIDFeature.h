@interface FCTagIDFeature : FCPersonalizationFeature

- (id)init;
- (BOOL)shouldBeBoosted;
- (double)featureWeightWithConfigurableValues:(id)a0 publisherID:(id)a1;
- (id)initWithPersonalizationIdentifier:(id)a0;
- (id)initWithTagID:(id)a0;

@end
