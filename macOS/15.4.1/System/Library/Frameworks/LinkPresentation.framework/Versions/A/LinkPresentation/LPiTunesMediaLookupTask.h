@class NSArray, NSString;

@interface LPiTunesMediaLookupTask : AMSLookup {
    NSArray *_identifiers;
    NSArray *_bundleIdentifiers;
    NSString *_storefrontCountryCode;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)start:(id /* block */)a0;
- (id)sharedBag;
- (id)_compileQueryParametersWithBundleIds:(id)a0 itemIds:(id)a1;
- (id)callerID;
- (id)initWithIdentifier:(id)a0 storefrontCountryCode:(id)a1;

@end
