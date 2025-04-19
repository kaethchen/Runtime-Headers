@class NSArray, NSString, MUIMailboxFilterGroup, EMFocus, MUIMailboxFilter;

@interface MUIMailboxFilterProvider : NSObject <MUIMailboxFilterProvider>

@property (copy, nonatomic) NSArray *filtersGroups;
@property (readonly, copy, nonatomic) NSArray *mailboxes;
@property (copy, nonatomic) NSArray *accountFilters;
@property (copy, nonatomic) NSArray *accountsInSmartMailboxScope;
@property (retain, nonatomic) EMFocus *focus;
@property (retain, nonatomic) MUIMailboxFilterGroup *accountsFilterGroup;
@property (retain, nonatomic) Class mailboxFilterClass;
@property (readonly, copy, nonatomic) NSArray *allFilters;
@property (readonly, copy, nonatomic) NSArray *defaultFilters;
@property (readonly, copy, nonatomic) NSArray *focusFilters;
@property (retain, nonatomic) MUIMailboxFilterGroup *individualVIPFilterGroup;
@property (retain, nonatomic) MUIMailboxFilter *senderFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)reduce:(id)a0;
- (void)_vipsDidChange:(id)a0;
- (id)_addressedGroup;
- (id)_andFilterGroup;
- (id)_accountsInSmartMailboxScope;
- (id)_flagsFilterGroup;
- (BOOL)_isInbox;
- (BOOL)_isMailboxOfSmartMailboxType:(long long)a0;
- (id)groupContainingFilter:(id)a0;
- (id)initWithFilterContext:(id)a0 mailboxFilterClass:(Class)a1;

@end
