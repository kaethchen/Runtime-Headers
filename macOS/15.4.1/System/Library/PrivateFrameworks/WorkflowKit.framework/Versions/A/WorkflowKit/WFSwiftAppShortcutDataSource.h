@interface WFSwiftAppShortcutDataSource : NSObject {
    void /* unknown type, empty encoding */ _collections;
    void /* unknown type, empty encoding */ appShortcutsProvider;
    void /* unknown type, empty encoding */ organizationStyle;
}

- (id)init;
- (void).cxx_destruct;
- (void)appShortcutsChanged;
- (id)fetchAppShortcutForBundleIdentifiers:(id)a0 localeIdentifier:(id)a1 error:(id *)a2;
- (id)initWithAppShortcutsProvider:(id)a0 denyListEnvironment:(unsigned long long)a1 organizationStyle:(long long)a2;

@end
