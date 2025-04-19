@class ASDPurgeAppsRequestOptions;

@interface ASDPurgeAppsRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDPurgeAppsRequestOptions *options;

- (id)init;
- (id)initWithOptions:(id)a0;

@end
