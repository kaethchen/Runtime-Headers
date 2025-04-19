@class NSString;
@protocol PKLaunchServicesProvider, PKRunningBoardProvider, PKSandboxProvider, PKLaunchProvider, PKFilesystemProvider, PKSystemProvider;

@interface PKExternalProviders : NSObject <PKExternalProviders>

@property (readonly, nonatomic) id<PKLaunchServicesProvider> ls;
@property (readonly, nonatomic) id<PKFilesystemProvider> filesystem;
@property (readonly, nonatomic) id<PKLaunchProvider> launch;
@property (readonly, nonatomic) id<PKSandboxProvider> sandbox;
@property (readonly, nonatomic) id<PKRunningBoardProvider> runningboard;
@property (readonly, nonatomic) id<PKSystemProvider> sys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLaunchServicesProvider:(id)a0;

@end
