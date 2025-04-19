@class NSString;

@interface TVISAmbientSettingsServiceForwardingObserver : NSObject <TVISAmbientSettingsServiceObserverInterface>

@property (readonly, copy, nonatomic) id /* block */ onSettingsUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSettingsUpdateCallback:(id /* block */)a0;
- (void)settingsDidUpdate;

@end
