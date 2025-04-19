@class NSSet, NSArray, NSString, NSAttributedString;

@interface OutlineController : NSObject {
    void /* unknown type, empty encoding */ _collapsedUUIDs;
    void /* unknown type, empty encoding */ _interactedUUIDs;
    void /* unknown type, empty encoding */ _index;
    void /* unknown type, empty encoding */ cache;
    void /* unknown type, empty encoding */ isPerformingMerge;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selectorDelayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_updateQueue;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ textStorage;
@property (nonatomic, copy) NSSet *collapsedUUIDs;
@property (nonatomic, copy) NSSet *interactedUUIDs;
@property (nonatomic) void /* unknown type, empty encoding */ isAsynchronous;
@property (nonatomic, readonly) long long collapsibleSectionAffordanceUsages;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } visibleRange;
@property (nonatomic, readonly) NSArray *visibleRangeValues;
@property (nonatomic, readonly) NSArray *invisibleRangeValues;
@property (nonatomic, readonly) NSArray *rangesValuesContainingCollapsedRanges;
@property (nonatomic, readonly) NSArray *rangesValuesContainingExpandedRanges;
@property (nonatomic, readonly) NSAttributedString *visibleAttributedText;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (void)requestUpdate;
- (id)ancestorsForUUID:(id)a0;
- (BOOL)canCollapseAnyUUIDs:(id)a0;
- (BOOL)canExpandAnyUUIDs:(id)a0;
- (id)closestVisibleAncestorForUUID:(id)a0;
- (void)collapseAll;
- (void)collapseUUIDs:(id)a0;
- (void)collapsibleSectionAffordanceUsedForUUIDs:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })descendantRangeForUUID:(id)a0;
- (id)descendantsForUUID:(id)a0;
- (void)expandAll;
- (void)expandAncestorsOfRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)expandUUIDs:(id)a0;
- (id)initWithTextStorage:(id)a0 collapsedUUIDs:(id)a1 asynchronous:(BOOL)a2;
- (BOOL)isUUIDCollapsed:(id)a0;
- (BOOL)isUUIDCollapsible:(id)a0;
- (BOOL)isUUIDHidden:(id)a0;
- (void)mergingDidEndWithNotification:(id)a0;
- (void)mergingWillBeginWithNotification:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForUUID:(id)a0;
- (void)resetCollapsibleSectionAffordanceUsages;
- (void)textStorageDidProcessEndEditingWithNotification:(id)a0;
- (BOOL)toggleCollapsedAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)toggleUUIDCollapsed:(id)a0;

@end
