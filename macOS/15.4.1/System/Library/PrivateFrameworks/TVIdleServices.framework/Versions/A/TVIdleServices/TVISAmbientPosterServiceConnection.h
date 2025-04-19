@class NSString;
@protocol TVISEvolutionService;

@interface TVISAmbientPosterServiceConnection : TVISAmbientServiceConnection <TVISAmbientPosterServiceInterface, TVISEvolutionServiceSnapshotObserver>

@property (readonly, retain, nonatomic) id<TVISEvolutionService> service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)remoteInterface;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 service:(id)a1;
- (void)queryCurrentSnapshotWithIntent:(long long)a0 reply:(id /* block */)a1;
- (void)service:(id)a0 didUpdateSnapshotWithTraits:(unsigned long long)a1;

@end
