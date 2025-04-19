@interface NSCTGlyphInfo : NSGlyphInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (oneway void)release;
- (BOOL)allowsWeakReference;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (unsigned long long)_cfTypeID;
- (void)encodeWithCoder:(id)a0;
- (id)_baseString;
- (unsigned int)_glyph;
- (unsigned long long)characterCollection;
- (unsigned long long)characterIdentifier;
- (id)glyphName;
- (unsigned int)_glyphForFont:(id)a0 baseString:(id)a1;

@end
