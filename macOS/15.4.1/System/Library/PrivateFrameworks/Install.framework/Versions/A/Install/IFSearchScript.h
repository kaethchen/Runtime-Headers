@class NSMutableString, NSXMLElement;

@interface IFSearchScript : IFSearch {
    NSMutableString *_scripts;
    NSXMLElement *_originalElement;
}

- (void)dealloc;
- (id)initWithXMLElement:(id)a0;
- (id)searchResultsForContext:(id)a0 inDomainPath:(id)a1;

@end
