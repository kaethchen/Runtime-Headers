@class NSSet;

@interface ICDocumentMergeController : NSObject <ICDocumentMergeControlling> {
    void /* unknown type, empty encoding */ textViewsToReasonCounts;
    void /* unknown type, empty encoding */ requestedMergeBlock;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ parentController;
@property (nonatomic, readonly) NSSet *textViews;
@property (nonatomic, readonly) BOOL isBlockingMerge;

- (id)init;
- (void).cxx_destruct;
- (void)requestMergeWithBlock:(id /* block */)a0;
- (void)removeTextView:(id)a0;
- (void)addTextView:(id)a0;
- (void)beginBlockingMergeForReason:(unsigned long long)a0 textView:(id)a1;
- (void)blockingMergeForReason:(unsigned long long)a0 textView:(id)a1 block:(id /* block */)a2;
- (void)endBlockingMergeForReason:(unsigned long long)a0 textView:(id)a1;

@end
