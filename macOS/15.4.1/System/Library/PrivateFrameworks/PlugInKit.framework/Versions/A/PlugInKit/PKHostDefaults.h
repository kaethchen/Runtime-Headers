@class PKHostPlugIn;

@interface PKHostDefaults : NSUserDefaults

@property (weak) PKHostPlugIn *plugin;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)synchronize;
- (void)registerDefaults:(id)a0;
- (id)initWithPlugIn:(id)a0;

@end
