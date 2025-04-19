@class NSString;

@interface SUOSUCatalogConfiguration : NSObject

@property (retain) NSString *catalogHostName;
@property (retain) NSString *managedByOrganizationName;
@property unsigned long long catalogConfigurationType;
@property (retain) NSString *pallasAudienceID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCatalogHostName:(id)a0 managedByOrganizationName:(id)a1 configurationType:(unsigned long long)a2 pallasAudienceID:(id)a3;

@end
