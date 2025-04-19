@class NSString;

@interface LSDefaultApplicationQueryServerDatastore : NSObject <LSDefaultApplicationQueryDatastore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)entryForApplication:(id)a0 category:(unsigned long long)a1;
- (void)removeEntriesForBundleIdentifier:(id)a0;
- (void)setEntry:(id)a0 forApplication:(id)a1 category:(unsigned long long)a2;

@end
