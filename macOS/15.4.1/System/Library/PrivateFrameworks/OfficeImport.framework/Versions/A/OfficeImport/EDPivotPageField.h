@class NSString;

@interface EDPivotPageField : NSObject {
    unsigned long long mFieldId;
    NSString *mCap;
    NSString *mName;
}

+ (id)pivotPageField;

- (id)description;
- (id)init;
- (id)name;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (id)cap;
- (unsigned long long)fieldId;
- (void)setFieldId:(unsigned long long)a0;
- (void)setCap:(id)a0;

@end
