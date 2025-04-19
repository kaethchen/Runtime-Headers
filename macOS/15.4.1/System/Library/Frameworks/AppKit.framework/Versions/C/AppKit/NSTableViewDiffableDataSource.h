@class NSString, NSTableView, NSTableViewDiffableDataSourceImpl;

@interface NSTableViewDiffableDataSource : NSObject <NSTableViewDiffableDataSourceProtocol, NSTableViewViewProvidingDataSource, NSTableViewDataSource> {
    NSTableView *_tableView;
    NSTableViewDiffableDataSourceImpl *_impl;
    id /* block */ _cellViewProvider;
}

@property (copy) id /* block */ rowViewProvider;
@property (copy) id /* block */ sectionHeaderViewProvider;
@property unsigned long long defaultRowAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)snapshot;
- (id)initWithTableView:(id)a0 cellProvider:(id /* block */)a1;
- (unsigned long long)_defaultRowAnimation;
- (BOOL)_hasSectionHeaderProvider;
- (BOOL)_isDiffableDataSource;
- (BOOL)_tableView:(id)a0 isGroupRow:(long long)a1;
- (id)_tableView:(id)a0 rowViewForRow:(long long)a1;
- (id)_tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1;
- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (id)itemIdentifierForRow:(long long)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (long long)rowForItemIdentifier:(id)a0;
- (long long)rowForSectionIdentifier:(id)a0;
- (id)sectionIdentifierForRow:(long long)a0;

@end
