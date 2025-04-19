@class AAContactsManager;

@interface AOSUIContactsProvider : AAContactsProvider {
    AAContactsManager *_contactsManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)_fetchImageDataForLocalContact:(id)a0 ofSize:(double)a1 completion:(id /* block */)a2;
- (void)_fetchServerImageDataFor:(id)a0 ofSize:(double)a1 completion:(id /* block */)a2;
- (void)fetchImagesForContacts:(id)a0 ofSize:(double)a1 completion:(id /* block */)a2;
- (void)fetchMyBenefactorsWithImagesOfSize:(double)a0 completion:(id /* block */)a1;
- (void)fetchMyBeneficiariesWithImagesOfSize:(double)a0 completion:(id /* block */)a1;
- (void)fetchMyCachedCustodiansWithImagesOfSize:(double)a0 completion:(id /* block */)a1;
- (void)fetchMyCustodiansWithImagesOfSize:(double)a0 completion:(id /* block */)a1;
- (void)fetchMyCustodianshipOwnersWithImagesOfSize:(double)a0 completion:(id /* block */)a1;
- (void)fetchMyWalrusEligibleCustodiansWithImagesOfSize:(double)a0 completion:(id /* block */)a1;
- (void)fetchSuggestedBeneficiariesWithImagesOfSize:(double)a0 completion:(id /* block */)a1;
- (void)fetchSuggestedCustodiansWithImagesOfSize:(double)a0 completion:(id /* block */)a1;

@end
