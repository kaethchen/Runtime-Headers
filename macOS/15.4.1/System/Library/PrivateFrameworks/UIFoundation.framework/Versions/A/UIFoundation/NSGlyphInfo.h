@class NSString;

@interface NSGlyphInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString *_baseString;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned short glyphID;
@property (readonly, copy) NSString *baseString;

+ (void)initialize;
+ (id)glyphInfoWithCharacterIdentifier:(unsigned long long)a0 collection:(unsigned long long)a1 baseString:(id)a2;
+ (id)glyphInfoWithGlyph:(unsigned int)a0 forFont:(id)a1 baseString:(id)a2;
+ (id)glyphInfoWithCGGlyph:(unsigned short)a0 forFont:(id)a1 baseString:(id)a2;
+ (id)glyphInfoWithGlyphName:(id)a0 forFont:(id)a1 baseString:(id)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (id)_baseString;
- (unsigned long long)characterCollection;
- (unsigned long long)characterIdentifier;
- (id)glyphName;
- (unsigned int)_glyphForFont:(id)a0 baseString:(id)a1;
- (id)initWithBaseString:(id)a0;

@end
