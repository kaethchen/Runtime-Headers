@class NSString, IFComponent;

@interface IFSearchComponent : IFSearch {
    IFComponent *_requiredComponent;
    NSString *_subSearchID;
    NSString *_searchPath;
}

- (void)dealloc;
- (id)component;
- (id)searchID;
- (void)setSearchID:(id)a0;
- (id)_findBundleViaLaunchServices:(id)a0 restrictToPath:(id)a1;
- (id)_findBundlesViaSpotlight:(id)a0 restrictToPath:(id)a1;
- (id)_searchForBundleWithIdentifier:(id)a0 defaultPath:(id)a1 inDomainPath:(id)a2;
- (id)initWithIdentifier:(id)a0 forComponent:(id)a1;
- (id)initWithXMLElement:(id)a0;
- (id)searchPath;
- (id)searchResultsForContext:(id)a0 inDomainPath:(id)a1;
- (void)setSearchPath:(id)a0;

@end
