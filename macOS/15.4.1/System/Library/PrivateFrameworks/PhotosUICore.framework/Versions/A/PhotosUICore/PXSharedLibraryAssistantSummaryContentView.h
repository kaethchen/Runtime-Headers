@class NSTextField, NSString, NSView, PXSharedLibraryAssistantViewModel;

@interface PXSharedLibraryAssistantSummaryContentView : NSView <PXChangeObserver> {
    NSView *_topImageView;
    NSTextField *_countsLabel;
    NSTextField *_peopleLabel;
    NSTextField *_dateLabel;
}

@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_initializeSubviews;
- (void)_updateCountsLabel;
- (void)_updateDateLabel;
- (void)_updatePeopleLabel;

@end
