@class ASDPurgeableAppRequestOptions;

@interface ASDPurgeableAppRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDPurgeableAppRequestOptions *options;

- (id)init;
- (id)initWithOptions:(id)a0;

@end
