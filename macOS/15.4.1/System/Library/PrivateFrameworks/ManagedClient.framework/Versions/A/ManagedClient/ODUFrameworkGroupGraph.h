@class ODUFrameworkMCXRecord, NSMutableArray;

@interface ODUFrameworkGroupGraph : NSObject {
    ODUFrameworkMCXRecord *mMCXRecord;
    NSMutableArray *mParents;
    ODUFrameworkGroupGraph *mNextGraph;
}

+ (id)createWithMCXRecord:(id)a0;

- (void)dealloc;
- (id)parents;
- (void)add:(id)a0 asParentOf:(id)a1;
- (id)findGraphNodeWithName:(id)a0 withType:(id)a1;
- (void)add:(id)a0 asParentOfGraphNodeWithUUIDString:(id)a1;
- (void)addParent:(id)a0;
- (void)filterWithAllowList:(id)a0 withDenyList:(id)a1 forLocalUsers:(BOOL)a2;
- (id)findFirstAncestralWorkgroupMCXRecordsNotInGraphList:(id *)a0;
- (id)findGraphNodeWithMCXRecord:(id)a0;
- (id)findGraphNodeWithUUIDString:(id)a0;
- (id)findNodeWithName:(id)a0 withType:(id)a1 withUUID:(id)a2 notInList:(id *)a3;
- (id)firstAncestralWorkgroupMCXRecords;
- (id)groupMCXRecords:(BOOL)a0;
- (BOOL)hasParentWithUUIDStringInList:(id)a0 withWildcardString:(id)a1;
- (id)initWithMCXRecord:(id)a0;
- (id)mcxRecord;
- (id)mcxSettingsMCXRecords:(BOOL)a0;
- (id)nextGraph;
- (id)orderedArray:(BOOL)a0;
- (id)orderedMCXRecords:(BOOL)a0;
- (BOOL)recordIsEquivalent:(id)a0;
- (BOOL)recordIsEquivalentToName:(id)a0 withType:(id)a1 withUUID:(id)a2;
- (void)removeParentAtIndex:(unsigned long long)a0;
- (void)setNextGraph:(id)a0;
- (id)workgroupMCXRecords:(BOOL)a0;

@end
