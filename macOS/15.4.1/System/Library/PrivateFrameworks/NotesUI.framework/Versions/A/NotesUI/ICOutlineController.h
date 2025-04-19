@class NSSet, NSArray, OutlineController, ICTTTextStorage, NSAttributedString;

@interface ICOutlineController : NSObject

@property (retain, nonatomic) OutlineController *outlineControllerObject;
@property (readonly, nonatomic) ICTTTextStorage *textStorage;
@property (nonatomic) BOOL isAsynchronous;
@property (retain, nonatomic) NSSet *collapsedUUIDs;
@property (readonly, nonatomic) long long collapsibleSectionAffordanceUsages;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } visibleRange;
@property (readonly, nonatomic) NSArray *visibleRangeValues;
@property (readonly, nonatomic) NSArray *invisibleRangeValues;
@property (readonly, nonatomic) NSArray *rangesValuesContainingCollapsedRanges;
@property (readonly, nonatomic) NSArray *rangesValuesContainingExpandedRanges;
@property (readonly, nonatomic) NSAttributedString *visibleAttributedText;

- (void).cxx_destruct;
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
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForUUID:(id)a0;
- (void)resetCollapsibleSectionAffordanceUsages;
- (BOOL)toggleCollapsedAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)toggleUUIDCollapsed:(id)a0;

@end
