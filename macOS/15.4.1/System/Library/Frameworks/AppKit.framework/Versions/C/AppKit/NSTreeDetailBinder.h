@interface NSTreeDetailBinder : NSArrayDetailBinder {
    struct __treeDetailBinderFlags { unsigned int _reservedTreeDetailBinder : 32; } _treeDetailBinderFlags;
}

+ (id)binderClassesSuperseded;
+ (BOOL)isUsableWithObject:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_handlesSelectAll;
- (void)_selectAllContent:(id)a0 inDetailController:(id)a1;

@end
