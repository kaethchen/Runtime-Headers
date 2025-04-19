@class ASDRestoreDemotedApplicationsRequestOptions;

@interface ASDRestoreDemotedApplicationsRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDRestoreDemotedApplicationsRequestOptions *options;

- (id)initWithOptions:(id)a0;
- (void)startWithCompletionBlock:(id /* block */)a0;

@end
