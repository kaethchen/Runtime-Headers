@class NSString;
@protocol CNAutocompleteResultWindowDelegate;

@interface CNAutocompleteUIDelegateWrapper : NSObject <CNAutocompleteResultWindowDelegate>

@property (weak) id<CNAutocompleteResultWindowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithDelegate:(id)a0;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)selectedResult:(id)a0;
- (id)accountStringForResult:(id)a0;
- (id)addressStringForResult:(id)a0;
- (void)autocompleteResultWindow:(id)a0 didEndDisplayingRowForResult:(id)a1;
- (void)autocompleteResultWindow:(id)a0 didSelectResult:(id)a1;
- (void)autocompleteResultWindow:(id)a0 willDisplayRowForResult:(id)a1;
- (id)currentPrefix;
- (void)didSelectResult:(id)a0;
- (id)headerForNilPrefixResults;
- (id)iconTypeForResult:(id)a0 selected:(BOOL)a1;
- (void)selectionDidChange:(id)a0;
- (id)viewForResult:(id)a0;

@end
