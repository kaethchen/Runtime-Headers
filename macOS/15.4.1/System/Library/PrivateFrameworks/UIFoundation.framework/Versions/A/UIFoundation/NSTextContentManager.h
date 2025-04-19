@class NSArray, NSString, NSTextRange, NSTextLayoutManager, NSMutableArray;
@protocol NSTextContentManagerDelegate;

@interface NSTextContentManager : NSObject <NSTextElementProvider, NSSecureCoding> {
    NSTextLayoutManager *_primaryTextLayoutManager;
    _Atomic unsigned long long _transactionStack;
    NSMutableArray *_editHistory;
    NSMutableArray *_textLayoutManagers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long maximumNumberOfUncachedElements;
@property (weak) id<NSTextContentManagerDelegate> delegate;
@property (readonly, copy) NSArray *textLayoutManagers;
@property (retain) NSTextLayoutManager *primaryTextLayoutManager;
@property (readonly) BOOL hasEditingTransaction;
@property BOOL automaticallySynchronizesTextLayoutManagers;
@property BOOL automaticallySynchronizesToBackingStore;
@property (readonly) NSTextRange *documentRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addTextLayoutManager:(id)a0;
- (id)locationFromLocation:(id)a0 withOffset:(long long)a1;
- (long long)offsetFromLocation:(id)a0 toLocation:(id)a1;
- (void)performEditingTransactionUsingBlock:(id /* block */)a0;
- (id)primaryTextLayoutManager;
- (id)textElementsForRange:(id)a0;
- (void)_decrementTransactionStack;
- (void)_incrementTransactionStack;
- (BOOL)containsExtraLineFragment;
- (id)enumerateTextElementsFromLocation:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (BOOL)isCountableDataSource;
- (void)performEditingTransactionWithBlock:(id /* block */)a0;
- (void)recordEditActionInRange:(id)a0 newTextRange:(id)a1;
- (void)removeTextLayoutManager:(id)a0;
- (void)replaceContentsInRange:(id)a0 withTextElements:(id)a1;
- (void)setPrimaryTextLayoutManager:(id)a0;
- (void)synchronizeTextLayoutManagers:(id /* block */)a0;
- (void)synchronizeToBackingStore:(id /* block */)a0;
- (id)textLayoutManagers;

@end
