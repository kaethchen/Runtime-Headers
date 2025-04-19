@class ASDInstallManifestRequestOptions;

@interface ASDInstallManifestRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDInstallManifestRequestOptions *options;

- (id)init;

@end
