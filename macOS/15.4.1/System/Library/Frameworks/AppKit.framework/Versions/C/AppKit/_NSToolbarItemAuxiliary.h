@class NSArray, _NSSplitViewPartitionAdapter;

@interface _NSToolbarItemAuxiliary : NSObject {
    NSArray *_allPossibleLabelsToFit;
    _NSSplitViewPartitionAdapter *_partitionAdapter;
    id _propertyListRepresentation;
    long long _visibilityPriority;
    double _preferredWidthRatio;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
