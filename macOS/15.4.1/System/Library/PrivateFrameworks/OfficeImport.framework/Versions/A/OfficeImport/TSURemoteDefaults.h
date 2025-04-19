@interface TSURemoteDefaults : TSURemotePropertyList

+ (id)sharedDefaults;

- (id)objectForKey:(id)a0;
- (id)initInternal;
- (id)initWithRemoteURL:(id)a0 localURL:(id)a1;
- (void)processPropertyList:(id)a0;
- (void)registerDefaults;

@end
