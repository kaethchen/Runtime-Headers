@class NSString, SCRElement, SCRChooserItemResult;

@interface SCRRemoteSearchManager : NSObject

@property (retain, nonatomic) SCRElement *containerElement;
@property (nonatomic) long long searchKey;
@property (copy, nonatomic) NSString *searchText;
@property (retain, nonatomic) SCRChooserItemResult *nextStartResult;
@property (retain, nonatomic) SCRChooserItemResult *prevStartResult;

+ (BOOL)elementSupportsSearch:(id)a0;
+ (id)uiContainerElementForUIElement:(id)a0;
+ (struct __CFString { } *)_axSearchKeyForSCRSearchKey:(long long)a0;
+ (id)_axSearchKeysForSCRSearchKeys:(id)a0;
+ (id)_nextPositionForElement:(id)a0 textRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 direction:(long long)a2 searchAttribute:(long long)a3 searchText:(id)a4;
+ (id)_remoteResultSearchForElement:(id)a0 direction:(long long)a1 searchAttribute:(long long)a2 searchText:(id)a3;
+ (id)allResultsWithSearchKey:(long long)a0 containerElement:(id)a1;
+ (id)nextPositionForElement:(id)a0 textRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 direction:(long long)a2 searchAttribute:(long long)a3;
+ (id)nextPositionForElement:(id)a0 textRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 direction:(long long)a2 searchText:(id)a3;
+ (id)remoteResultSearchForElement:(id)a0 direction:(long long)a1 searchAttribute:(long long)a2;
+ (id)remoteResultSearchForElement:(id)a0 direction:(long long)a1 searchText:(id)a2;
+ (id)resultsWithSearchKeys:(id)a0 containerElement:(id)a1 searchDirection:(long long)a2 limit:(unsigned long long)a3 startResult:(id)a4 searchText:(id)a5 immediateDescendantsOnly:(BOOL)a6;
+ (id)uiChildElementForSearchDirection:(long long)a0 containerElement:(id)a1 uiStartElement:(id)a2;
+ (id)uiChildElementInContainerElement:(id)a0 startResult:(id)a1 searchDirection:(long long)a2 maxItem:(unsigned long long)a3 batchSize:(unsigned long long)a4 immediateDescendantsOnly:(BOOL)a5 searchPredicate:(id /* block */)a6;
+ (id)uiChildElementInContainerElement:(id)a0 startResult:(id)a1 searchDirection:(long long)a2 searchPredicate:(id /* block */)a3;
+ (id)uiChildElementsForSearchDirection:(long long)a0 containerElement:(id)a1 uiStartElement:(id)a2 limit:(long long)a3;
+ (BOOL)uiElementSupportsSearch:(id)a0;
+ (id)unpromotableUIDescendantElementForUIElement:(id)a0;

- (void).cxx_destruct;
- (id)nextNavigableResult;
- (id)nextResult;
- (id)nextResultsWithLimit:(unsigned long long)a0;
- (id)_startResultForSearchDirection:(long long)a0;
- (id)_navigableElementForSearchDirection:(long long)a0;
- (id)_resultsWithSearchDirection:(long long)a0 limit:(unsigned long long)a1;
- (id)_resultsWithSearchKeys:(id)a0 containerElement:(id)a1 searchDirection:(id)a2 limit:(id)a3 startResult:(id)a4 searchText:(id)a5 immediateDescendantsOnly:(id)a6;
- (id)_uiElementsForAXElements:(id)a0;
- (void)_updateStartElementsWithResults:(id)a0;
- (id)initWithSearchKey:(long long)a0 containerElement:(id)a1 startResult:(id)a2 searchText:(id)a3;
- (id)prevNavigableResult;
- (id)prevResult;
- (id)prevResultsWithLimit:(unsigned long long)a0;

@end
