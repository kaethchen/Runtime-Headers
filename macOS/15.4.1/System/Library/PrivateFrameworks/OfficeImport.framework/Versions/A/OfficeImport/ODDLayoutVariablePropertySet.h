@interface ODDLayoutVariablePropertySet : OADProperties {
    int mDirection;
    BOOL mHasDirection;
}

+ (id)defaultProperties;

- (id)description;
- (int)direction;
- (void)setDirection:(int)a0;
- (id)initWithDefaults;
- (BOOL)hasDirection;

@end
