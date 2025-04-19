@interface ML3DaemonClient : ML3Client

@property (class, readonly, nonatomic) ML3DaemonClient *sharedDaemonClient;

- (id)init;
- (id)name;
- (id)bundleID;
- (int)processID;

@end
