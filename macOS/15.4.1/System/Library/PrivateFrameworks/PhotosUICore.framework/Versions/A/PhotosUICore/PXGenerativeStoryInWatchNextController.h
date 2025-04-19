@class PXGSingleViewLayout;

@interface PXGenerativeStoryInWatchNextController : NSObject <PXGSingleViewLayoutDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_layout;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ storyViewModel;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ $__lazy_storage_$_memoryCardView;
}

@property (nonatomic, retain) PXGSingleViewLayout *layout;
@property (nonatomic) void /* unknown type, empty encoding */ size;
@property (nonatomic, readonly) long long index;
@property (nonatomic) void /* unknown type, empty encoding */ wantsMemoryCreationCard;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStoryViewModel:(id)a0;
- (void)invalidateMemoryCardVisibility;
- (void)openGenerativeMemory;
- (void)setMemoryCardVisible:(BOOL)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })singleViewLayout:(id)a0 desiredSizeForReferenceSize:(struct CGSize { double x0; double x1; })a1;

@end
