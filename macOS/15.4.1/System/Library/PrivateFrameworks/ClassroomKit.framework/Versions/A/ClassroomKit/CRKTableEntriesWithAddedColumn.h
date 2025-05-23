@class NSString, NSArray;
@protocol CRKTableEntries;

@interface CRKTableEntriesWithAddedColumn : NSObject <CRKTableEntries> {
    id<CRKTableEntries> mOrigin;
    unsigned long long mIndex;
    NSArray *mEntries;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)columnCount;
- (unsigned long long)rowCount;
- (id)entryAtRow:(unsigned long long)a0 column:(unsigned long long)a1;
- (id)initWithOrigin:(id)a0 index:(unsigned long long)a1 entries:(id)a2;

@end
