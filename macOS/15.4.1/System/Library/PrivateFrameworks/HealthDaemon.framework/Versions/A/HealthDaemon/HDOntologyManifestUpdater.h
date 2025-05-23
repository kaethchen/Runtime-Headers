@class HDOntologyUpdateCoordinator;

@interface HDOntologyManifestUpdater : NSObject

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator;

+ (id)manifestURLWithBaseURL:(id)a0;
+ (id)manifestVersionURLForManifestURL:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOntologyUpdateCoordinator:(id)a0;
- (void)updateManifestWithURL:(id)a0 session:(id)a1 completion:(id /* block */)a2;

@end
