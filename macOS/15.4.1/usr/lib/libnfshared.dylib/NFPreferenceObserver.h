@interface NFPreferenceObserver : NSObject

@property (copy) id /* block */ callback;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stop;
- (void)start:(id /* block */)a0;
- (void)handlePreferencesOrProfileChanged;

@end
