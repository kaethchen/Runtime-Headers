@class NSTabViewController, NSString, NSSegmentedControl;

@interface NSTabViewControllerSegmentedControlUIProvider : NSObject <NSTabViewControllerUIProvider> {
    NSSegmentedControl *_segmentedControl;
}

@property long long segmentedControlLocation;
@property (retain) NSSegmentedControl *segmentedControl;
@property NSTabViewController *tabViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_addConstraintsForTabView:(id)a0 inContainer:(id)a1;
- (long long)_associatedTabStyle;
- (void)_changeSelectedSegment:(id)a0;
- (id)_makeSegmentedControl;
- (void)_startObservingTabViewItem:(id)a0;
- (void)_startObservingTabViewItems:(id)a0;
- (void)_stopObservingTabViewItem:(id)a0;
- (void)_stopObservingTabViewItems:(id)a0;
- (void)insertTabView:(id)a0 atIndex:(unsigned long long)a1 newSelectedIndex:(long long)a2;
- (void)removeTabView:(id)a0 atIndex:(unsigned long long)a1 newSelectedIndex:(long long)a2;
- (void)selectTabViewItemAtIndex:(long long)a0;
- (void)setTabViewItemsFrom:(id)a0 to:(id)a1 newSelectedIndex:(long long)a2;
- (void)setUpForTabView:(id)a0 inContainer:(id)a1;
- (void)tearDown;

@end
