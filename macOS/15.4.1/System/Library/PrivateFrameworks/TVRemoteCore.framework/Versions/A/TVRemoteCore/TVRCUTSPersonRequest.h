@interface TVRCUTSPersonRequest : NSObject

@property (retain, nonatomic) TVRCUTSPersonRequest *selfRetained;

- (void).cxx_destruct;
- (id)_requestPropertiesForEndPoint:(id)a0 apiVersion:(id)a1 headersDict:(id)a2 queryParamsDict:(id)a3;
- (void)requestForPersonID:(id)a0 completion:(id /* block */)a1;

@end
