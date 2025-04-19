@interface OADFill : OADProperties <NSCopying> {
    BOOL mDefinedByStyle;
}

@property BOOL definedByStyle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (float)alpha;
- (BOOL)isOverridden;
- (void)setStyleColor:(id)a0;
- (BOOL)usesPlaceholderColor;

@end
