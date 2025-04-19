@class NSValue, NSString;

@interface PDBuildMapKey : NSObject <NSCopying> {
    NSValue *mDrawableValue;
    NSString *mGroupId;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)drawable;
- (id)groupId;
- (void)setGroupId:(id)a0;
- (id)initWithDrawable:(id)a0 groupId:(id)a1;
- (void)setDrawable:(id)a0;

@end
