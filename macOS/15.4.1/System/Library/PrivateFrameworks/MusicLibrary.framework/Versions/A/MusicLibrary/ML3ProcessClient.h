@interface ML3ProcessClient : ML3Client

@property (class, readonly, nonatomic) ML3ProcessClient *sharedProcessClient;

- (id)init;
- (id)name;
- (id)bundleID;
- (int)processID;

@end
