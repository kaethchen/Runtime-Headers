@interface PXSharedAlbumsActivityEntryItemList : NSObject {
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ activityEntries;
    void /* unknown type, empty encoding */ representedValue;
    void /* unknown type, empty encoding */ itemIdentifiers;
    void /* unknown type, empty encoding */ numberOfItems;
    void /* unknown type, empty encoding */ loadingStatus;
    void /* unknown type, empty encoding */ version;
}

@property (nonatomic, readonly) long long count;

- (id)init;
- (void).cxx_destruct;
- (id)itemAtIndex:(long long)a0;
- (id)initWithActivities:(id)a0;

@end
