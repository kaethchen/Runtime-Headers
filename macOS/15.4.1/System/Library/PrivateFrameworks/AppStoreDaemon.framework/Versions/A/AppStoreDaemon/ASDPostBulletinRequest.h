@class ASDPostBulletinRequestOptions;

@interface ASDPostBulletinRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDPostBulletinRequestOptions *options;

- (id)init;
- (id)initWithOptions:(id)a0;

@end
