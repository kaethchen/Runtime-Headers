@class NSTableRowData, NSMutableDictionary;

@interface NSTableViewRecycledViews : NSObject {
    NSTableRowData *_rowData;
    NSMutableDictionary *_viewPools;
    unsigned long long _maxPoolSize;
    BOOL _cullingDisabled;
}

- (void)dealloc;

@end
