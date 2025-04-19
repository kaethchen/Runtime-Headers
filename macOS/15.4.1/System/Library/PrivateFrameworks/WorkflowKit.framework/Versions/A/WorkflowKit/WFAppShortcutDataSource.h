@class WFSwiftAppShortcutDataSource;

@interface WFAppShortcutDataSource : NSObject

@property (readonly, nonatomic) WFSwiftAppShortcutDataSource *dataSource;

- (void).cxx_destruct;
- (id)fetchAppShortcutsForBundleIdentifiers:(id)a0 localeIdentifier:(id)a1 error:(id *)a2;
- (id)initWithAppShortcutsDenyListEnvironment:(unsigned long long)a0 environment:(long long)a1;

@end
