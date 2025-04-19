@interface _NSOVRowEntry : NSObject {
    _NSOVRowEntry *parent;
    long long childIndex;
    id item;
    long long childCount;
    id *children;
    long long *rowCounts;
    short lvl;
    struct { unsigned char expandable : 1; unsigned char expanded : 1; unsigned char initedIsExpandableData : 1; } _REFlags;
}

- (id)description;

@end
