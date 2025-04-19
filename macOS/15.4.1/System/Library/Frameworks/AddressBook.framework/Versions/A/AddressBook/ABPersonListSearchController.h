@class ABPersonListSearchControllerUsageStatisticsHelper, NSString, NSSearchField, NSArray, ABPersonSearchConfiguration, ABAddressBook;
@protocol ABPersonSearchControllerDelegate, ABPersonListControllerProtocol, ABPersonListHeadlining;

@interface ABPersonListSearchController : NSObject <NSTextFieldDelegate, NSSearchFieldDelegate> {
    ABPersonSearchConfiguration *_currentConfiguration;
    unsigned long long _countOfLocalSearchesPerformed;
    unsigned long long _countOfServerSearchesPerformed;
}

@property (weak) id<ABPersonListControllerProtocol> personListController;
@property (weak, nonatomic) NSSearchField *searchField;
@property (weak) id<ABPersonSearchControllerDelegate> delegate;
@property (retain) ABAddressBook *browsingAddressBook;
@property (retain) id<ABPersonListHeadlining> browsingHeadliner;
@property (copy) NSString *searchString;
@property (copy) NSString *previousSearchString;
@property (readonly, copy) NSArray *searchTerms;
@property (nonatomic) BOOL shouldSelectBestEntry;
@property (readonly) unsigned long long countOfLocalSearchesPerformed;
@property (readonly) unsigned long long countOfServerSearchesPerformed;
@property (retain) ABPersonListSearchControllerUsageStatisticsHelper *usageStatisticsHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)selectPrevious:(id)a0;
- (void)_searchFieldAction:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidBeginEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)selectNext:(id)a0;
- (void)searchForString:(id)a0;
- (void)resetCountsOfSearchesPerformed;
- (void)setSearchConfiguration:(id)a0;
- (void)_implicitlyAdvanceTheSelection:(id)a0;
- (void)focusSearchField:(id)a0;
- (void)searchConfigurationPerformedLocalSearch;
- (void)searchConfigurationPerformedServerSearch;
- (void)selectBestRecordMatchingQuery:(id)a0;
- (void)setPlaceholderStringForAllContacts;
- (void)setPlaceholderStringWithGroupName:(id)a0;
- (void)setSearchGroupName:(id)a0 isAllContacts:(BOOL)a1;

@end
