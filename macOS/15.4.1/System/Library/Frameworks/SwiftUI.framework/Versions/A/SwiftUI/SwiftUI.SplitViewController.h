@class NSArray;

@interface SwiftUI.SplitViewController : NSSplitViewController {
    void /* unknown type, empty encoding */ hostingInspector;
    void /* unknown type, empty encoding */ leadingOrTrailingSidebarIsTransitioning;
    void /* unknown type, empty encoding */ inDividerDragSession;
    void /* unknown type, empty encoding */ needsSizeInvalidationByConstraints;
    void /* unknown type, empty encoding */ inspectorPresentedBinding;
}

@property (nonatomic, copy) NSArray *splitViewItems;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)splitView:(id)a0 dragSessionBeganForDividerAtIndex:(unsigned long long)a1;
- (void)splitView:(id)a0 dragSessionEndedForDividerAtIndex:(unsigned long long)a1;
- (void)splitViewItem:(id)a0 didChangeCollapsed:(BOOL)a1 animated:(BOOL)a2;
- (void)splitViewItem:(id)a0 willChangeCollapsed:(BOOL)a1 animated:(BOOL)a2;

@end
