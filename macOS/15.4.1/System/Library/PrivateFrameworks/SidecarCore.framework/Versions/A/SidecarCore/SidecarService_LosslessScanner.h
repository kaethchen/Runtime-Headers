@interface SidecarService_LosslessScanner : SidecarService

+ (id)name;
+ (id)returnTypes;
+ (long long)minimumRapportVersion;

- (id)localizedDescription;
- (id)localizedItemName;
- (id)serviceIdentifier;
- (id)serviceExtension;
- (id)makeRequest;

@end
