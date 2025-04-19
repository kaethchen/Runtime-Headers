@class TSWPRangeArray, TSWPStorage;
@protocol TSWPStyleProvider;

@interface TSWPStoragePasteboardProxy : TSPObject {
    TSWPStorage *_storage;
    TSWPRangeArray *_copiedRanges;
    id<TSWPStyleProvider> _styleProvider;
}

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } storageRange;

- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 storage:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 copiedRanges:(id)a3 styleProvider:(id)a4;

@end
