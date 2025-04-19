@class NSString;

@interface EDTableStylesCollection : EDCollection {
    NSString *mDefaultTableStyleName;
    NSString *mDefaultPivotStyleName;
}

- (void).cxx_destruct;
- (id)objectWithName:(id)a0;
- (id)defaultPivotStyle;
- (id)defaultPivotStyleName;
- (id)defaultTableStyle;
- (id)defaultTableStyleName;
- (void)setDefaultPivotStyleName:(id)a0;
- (void)setDefaultTableStyleName:(id)a0;

@end
