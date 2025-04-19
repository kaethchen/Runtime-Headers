@class NSString;

@interface SUOSUCatalogServer : NSObject

@property (retain) NSString *name;
@property (retain) NSString *trainName;
@property (retain) NSString *catalogURL;
@property (retain) NSString *backgroundCatalogURL;
@property (retain) NSString *audienceID;
@property BOOL enableOnProdFused;

- (id)description;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithDictionary:(id)a0 trainName:(id)a1;

@end
