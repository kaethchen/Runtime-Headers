@class NSString, NSTableView, NSMutableArray, NSTableColumn;

@interface IASLogDataSource : NSObject <NSTableViewDataSource, NSTableViewDelegate> {
    NSTableView *_logView;
    NSMutableArray *_rootChildren;
    NSMutableArray *_lineNumbers;
    long long _currentLogFilter;
    struct { unsigned int x0; unsigned int x1; void *x2; } *_buf;
    unsigned long long _lineIndex;
    unsigned long long _longestStrlen;
    unsigned long long _widestStringPx;
    unsigned int _last_seen_offset;
    NSString *_searchString;
    NSTableColumn *_msgCol;
    NSTableColumn *_lnCol;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTableView:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)setSearchString:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)_clearLog;
- (long long)_syncObjectsFromBuffer;
- (void)_updateLog;
- (void)setLogFilter:(long long)a0;

@end
