@class NSArray, NSString, AXFUIElement;

@interface AXFRemoteSearchManager : NSObject

@property (readonly, nonatomic) NSArray *_searchKeys;
@property (readonly, copy, nonatomic) NSString *_searchText;
@property (readonly, nonatomic) BOOL _visibleOnly;
@property (readonly, weak, nonatomic) AXFUIElement *_containerElement;
@property (retain, nonatomic, setter=_setNextStartElement:) AXFUIElement *_nextStartElement;
@property (retain, nonatomic, setter=_setPreviousStartElement:) AXFUIElement *_previousStartElement;

+ (BOOL)elementSupportsSearch:(id)a0;

- (void).cxx_destruct;
- (id)_previousResult;
- (id)_navigableResultInSearchDirection:(unsigned long long)a0;
- (id)_nextResult;
- (id)_nextResultsWithLimit:(unsigned long long)a0;
- (id)_previousResultsWithLimit:(unsigned long long)a0;
- (id)_resultsWithLimit:(unsigned long long)a0 inSearchDirection:(unsigned long long)a1;
- (id)_startElementForDirection:(unsigned long long)a0;
- (void)_updateStartElements:(id)a0;
- (id)initWithContainer:(id)a0 startElement:(id)a1 searchKeys:(id)a2 searchText:(id)a3 visibleOnly:(BOOL)a4;
- (id)nextNavigableResult;
- (id)nextResult;
- (id)nextResultsWithLimit:(unsigned long long)a0;
- (id)previousNavigableResult;
- (id)previousResult;
- (id)previousResultsWithLimit:(unsigned long long)a0;
- (BOOL)shouldIncludElementInNavigableSearch:(id)a0 startingFromElement:(id)a1;

@end
