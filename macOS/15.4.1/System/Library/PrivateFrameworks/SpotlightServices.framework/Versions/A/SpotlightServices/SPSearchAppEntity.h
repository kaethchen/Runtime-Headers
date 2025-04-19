@class NSString;

@interface SPSearchAppEntity : SPSearchEntity

@property (readonly) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)spotlightQueryString;
- (id)currentSearchString;
- (BOOL)isAppEntitySearch;
- (BOOL)isScopedSearch;
- (void)appendToQuery:(id)a0 key:(id)a1 value:(id)a2 additions:(id)a3 flags:(id)a4;
- (id)initWithBundleIdentifier:(id)a0 appName:(id)a1 fromSuggestion:(BOOL)a2;

@end
