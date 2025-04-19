@interface TVRCUTSMediaInfoRequest : NSObject

@property (retain, nonatomic) TVRCUTSMediaInfoRequest *selfRetained;

- (void).cxx_destruct;
- (id)_requestPropertiesForEndPoint:(id)a0 apiVersion:(id)a1 headersDict:(id)a2 queryParamsDict:(id)a3;
- (void)requestForCanonicalID:(id)a0 completion:(id /* block */)a1;
- (void)requestForCanonicalID:(id)a0 includeRoles:(BOOL)a1 completion:(id /* block */)a2;

@end
