@class NSString, NSSet;

@interface DADClientCalendarDirectorySearchResponseDelegate : DADClientDelegate <DAEventsCalendarDirectorySearchResponseConsumer, DASearchQueryConsumer> {
    NSSet *_terms;
    NSSet *_recordTypes;
    unsigned long long _resultLimit;
    id _searchID;
    BOOL _exceededResultLimit;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)searchQuery:(id)a0 finishedWithError:(id)a1;
- (void)searchQuery:(id)a0 returnedResults:(id)a1;
- (void)performRequest;
- (void)calendarDirectorySearchFinishedWithError:(id)a0 exceededResultLimit:(BOOL)a1;
- (id)_convertSearchQueryResults:(id)a0;
- (void)calendarDirectorySearchReturnedResults:(id)a0;
- (id)initWithAccountID:(id)a0 client:(id)a1 terms:(id)a2 recordTypes:(id)a3 resultLimit:(unsigned long long)a4;

@end
