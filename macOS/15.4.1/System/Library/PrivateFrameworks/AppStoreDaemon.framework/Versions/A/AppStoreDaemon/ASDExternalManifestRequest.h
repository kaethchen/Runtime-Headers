@class ASDExternalManifestRequestOptions;

@interface ASDExternalManifestRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDExternalManifestRequestOptions *options;

- (id)init;
- (id)initWithOptions:(id)a0;

@end
