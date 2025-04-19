@class NSArray;

@interface IFSearchLocator : IFSearch {
    NSArray *_locatorArray;
}

+ (id)searchListWithTokensElement:(id)a0;

- (BOOL)_parseLocatorPlistFromElement:(id)a0;
- (id)initWithTokenDefinitions:(id)a0 forTokenID:(id)a1;
- (id)initWithXMLElement:(id)a0;
- (id)searchResultsForContext:(id)a0 inDomainPath:(id)a1;

@end
