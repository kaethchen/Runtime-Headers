@class NSString, NSMutableArray;

@interface ObjectTableDataSource : NSObject <NSTableViewDataSource> {
    NSString *_lastSortHeader;
    int _comparisonType;
    BOOL _descendingSort;
}

@property (retain) NSMutableArray *data;
@property (readonly) unsigned long long count;
@property id delegate;
@property BOOL readOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)insertItem:(long long)a0;
- (void)removeAllItems;
- (void)removeItem:(long long)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 setObjectValue:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (void)tableView:(id)a0 sortDescriptorsDidChange:(id)a1;
- (int)findItemObjectRow:(id)a0 columnIdentifier:(id)a1;
- (id)getObjectsInColumnAsArray:(id)a0;
- (void)importFromArray:(id)a0;
- (void)importFromPListFile:(id)a0;
- (id)itemObject:(long long)a0 columnIdentifier:(id)a1;
- (void)setItemObject:(id)a0 atRow:(long long)a1 columnIdentifier:(id)a2;
- (void)sortDataByColumnIdentifier:(id)a0;
- (void)sortDataByColumnIdentifier:(id)a0 usingSelector:(SEL)a1;

@end
