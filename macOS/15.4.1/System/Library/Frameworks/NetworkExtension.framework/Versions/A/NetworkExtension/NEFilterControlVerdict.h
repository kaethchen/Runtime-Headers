@interface NEFilterControlVerdict : NEFilterNewFlowVerdict <NSSecureCoding, NSCopying> {
    BOOL _updateRules;
    BOOL _handledByDataProvider;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allowVerdictWithUpdateRules:(BOOL)a0;
+ (id)dropVerdictWithUpdateRules:(BOOL)a0;
+ (id)updateRules;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;

@end
