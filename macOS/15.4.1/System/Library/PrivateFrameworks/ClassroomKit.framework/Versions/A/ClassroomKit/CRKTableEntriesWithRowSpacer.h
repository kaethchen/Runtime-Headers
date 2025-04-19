@class NSString;
@protocol CRKTableEntry, CRKTableEntries;

@interface CRKTableEntriesWithRowSpacer : NSObject <CRKTableEntries> {
    id<CRKTableEntries> mOrigin;
    unsigned long long mIndex;
    id<CRKTableEntry> mSpacerEntry;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)columnCount;
- (unsigned long long)rowCount;
- (id)entryAtRow:(unsigned long long)a0 column:(unsigned long long)a1;
- (id)initWithOrigin:(id)a0 index:(unsigned long long)a1 spacerEntry:(id)a2;

@end
