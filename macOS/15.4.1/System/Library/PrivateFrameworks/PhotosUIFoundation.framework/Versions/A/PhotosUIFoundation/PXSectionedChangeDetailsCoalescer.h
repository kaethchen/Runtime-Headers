@class PXSectionedDataSourceChangeDetails, PXMutableArrayChangeDetails, NSMutableArray;

@interface PXSectionedChangeDetailsCoalescer : NSObject {
    long long _fromDataSourceIdentifier;
    long long _currentToDataSourceIdentifier;
    PXMutableArrayChangeDetails *_sectionChangeDetails;
    NSMutableArray *_itemChangeEntries;
    PXSectionedDataSourceChangeDetails *_cachedResult;
}

@property (readonly, nonatomic) PXSectionedDataSourceChangeDetails *coalescedChangeDetails;

+ (id)changeDetailsByCoalescingChangeDetails:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addChangeDetails:(id)a0;
- (id)initWithSectionedChangeDetails:(id)a0;

@end
