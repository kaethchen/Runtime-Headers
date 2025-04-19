@class PKServicePersonality;

@interface PKServiceDefaults : NSUserDefaults

@property (weak) PKServicePersonality *personality;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)synchronize;
- (id)initWithPersonality:(id)a0;

@end
