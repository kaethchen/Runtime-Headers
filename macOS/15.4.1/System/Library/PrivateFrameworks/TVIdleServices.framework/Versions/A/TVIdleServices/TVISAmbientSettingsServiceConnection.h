@class TVISAerialEvolutionService, NSString;

@interface TVISAmbientSettingsServiceConnection : TVISAmbientServiceConnection <TVISAmbientSettingsServiceInterface>

@property (readonly, nonatomic) TVISAerialEvolutionService *aerialService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)remoteInterface;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_onSettingsUpdated;
- (id)initWithConnection:(id)a0 services:(id)a1;
- (void)queryAerialThemesWithReply:(id /* block */)a0;
- (void)updateActiveStateForAerialThemeWithID:(id)a0 activate:(BOOL)a1 reply:(id /* block */)a2;

@end
