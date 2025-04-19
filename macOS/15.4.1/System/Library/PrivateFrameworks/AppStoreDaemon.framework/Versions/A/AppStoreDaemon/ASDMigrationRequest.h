@class ASDMigrationRequestOptions;

@interface ASDMigrationRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDMigrationRequestOptions *options;

- (id)init;
- (id)initWithOptions:(id)a0;
- (void)startWithCompletionBlock:(id /* block */)a0;

@end
