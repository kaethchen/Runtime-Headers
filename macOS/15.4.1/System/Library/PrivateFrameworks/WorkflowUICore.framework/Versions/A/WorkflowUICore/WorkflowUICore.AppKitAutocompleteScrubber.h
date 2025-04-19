@interface WorkflowUICore.AppKitAutocompleteScrubber : NSScrubber <NSScrubberDelegate, NSScrubberDataSource, NSScrubberFlowLayoutDelegate> {
    void /* unknown type, empty encoding */ autocompleteDataSource;
    void /* unknown type, empty encoding */ autocompleteDelegate;
    void /* unknown type, empty encoding */ zeroKeywordResults;
    void /* unknown type, empty encoding */ hostingViewIdentifier;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)numberOfItemsForScrubber:(id)a0;
- (void)scrubber:(id)a0 didSelectItemAtIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })scrubber:(id)a0 layout:(id)a1 sizeForItemAtIndex:(long long)a2;
- (id)scrubber:(id)a0 viewForItemAtIndex:(long long)a1;

@end
