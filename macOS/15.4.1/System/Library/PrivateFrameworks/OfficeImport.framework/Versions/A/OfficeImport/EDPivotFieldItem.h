@interface EDPivotFieldItem : NSObject {
    BOOL mChildItems;
    BOOL mExpanded;
    BOOL mCalculatedMember;
    BOOL mMissed;
    BOOL mHidden;
    BOOL mDetailsHidden;
    int mType;
    unsigned long long mItemIndex;
}

+ (id)pivotFieldItem;

- (id)description;
- (id)init;
- (void)setHidden:(BOOL)a0;
- (void)setType:(int)a0;
- (int)type;
- (BOOL)expanded;
- (unsigned long long)itemIndex;
- (void)setExpanded:(BOOL)a0;
- (void)setItemIndex:(unsigned long long)a0;
- (BOOL)hidden;
- (BOOL)childItems;
- (BOOL)missed;
- (void)setMissed:(BOOL)a0;
- (BOOL)calculatedMember;
- (BOOL)detailsHidden;
- (void)setCalculatedMember:(BOOL)a0;
- (void)setChildItems:(BOOL)a0;
- (void)setDetailsHidden:(BOOL)a0;

@end
