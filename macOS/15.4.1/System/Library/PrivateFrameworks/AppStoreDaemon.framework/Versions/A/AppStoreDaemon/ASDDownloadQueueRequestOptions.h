@class ASDJobManifest;

@interface ASDDownloadQueueRequestOptions : ASDRequestOptions

@property (copy, nonatomic) ASDJobManifest *manifest;

- (id)init;
- (void).cxx_destruct;
- (id)initWithManifest:(id)a0;

@end
