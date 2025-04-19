@interface SUOSUCatalogManager : NSObject

- (id)allTrainsFromInfoV2:(id)a0;
- (void)allTrainsWithCompletion:(id /* block */)a0;
- (void)updateCatalogWithServer:(id)a0 completion:(id /* block */)a1;
- (BOOL)updateCatalogWithServer:(id)a0 withError:(id *)a1;

@end
