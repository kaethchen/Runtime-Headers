@class PHASESharedListener;

@interface PHASESharedEngine : PHASEEngine

@property (readonly, nonatomic) PHASESharedListener *sharedListener;

- (void).cxx_destruct;
- (id)rootObjectForSessionUUID:(id)a0 error:(id *)a1;
- (void)gatherSharedEntityDebugInformation:(id /* block */)a0;
- (id)initWithUpdateMode:(long long)a0 error:(id *)a1;
- (id)rootObjectForSessionIOBinding:(id)a0 error:(id *)a1;

@end
