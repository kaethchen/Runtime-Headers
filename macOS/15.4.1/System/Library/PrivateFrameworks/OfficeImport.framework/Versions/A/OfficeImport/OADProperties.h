@interface OADProperties : NSObject {
    OADProperties *mParent;
    unsigned char mIsMerged : 1;
    unsigned char mIsMergedWithParent : 1;
}

+ (id)defaultProperties;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)parent;
- (void)setParent:(id)a0;
- (void)flatten;
- (id)initWithDefaults;
- (void)changeParentPreservingEffectiveValues:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isMerged;
- (BOOL)isMergedPropertyForSelector:(SEL)a0;
- (BOOL)isMergedWithParent;
- (id)overrideForSelector:(SEL)a0;
- (id)overrideForSelector:(SEL)a0 mustExist:(BOOL)a1;
- (void)p_setParent:(id)a0;
- (id)possiblyInexistentOverrideForSelector:(SEL)a0;
- (void)removeUnnecessaryOverrides;
- (void)setMerged:(BOOL)a0;
- (void)setMergedWithParent:(BOOL)a0;

@end
