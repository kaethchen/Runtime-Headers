@class PHCollection;

@interface PXNavigationListGroupItem : PXNavigationListItem {
    BOOL _group;
    BOOL _draggable;
    BOOL _expandable;
    PHCollection *_collection;
}

+ (id)titleForIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)collection;
- (BOOL)isGroup;
- (BOOL)isDraggable;
- (BOOL)isExpandable;
- (id)initWithIdentifier:(id)a0 collection:(id)a1;

@end
