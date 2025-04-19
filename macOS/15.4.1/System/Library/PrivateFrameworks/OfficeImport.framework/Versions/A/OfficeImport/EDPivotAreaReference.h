@interface EDPivotAreaReference : NSObject {
    BOOL mByPosition;
    BOOL mRelative;
    BOOL mSelected;
    unsigned long long mFieldId;
    unsigned long long mCount;
}

+ (id)pivotAreaReference;

- (id)description;
- (id)init;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)a0;
- (BOOL)selected;
- (void)setSelected:(BOOL)a0;
- (unsigned long long)fieldId;
- (void)setFieldId:(unsigned long long)a0;
- (BOOL)byPosition;
- (BOOL)relative;
- (void)setByPosition:(BOOL)a0;
- (void)setRelative:(BOOL)a0;

@end
