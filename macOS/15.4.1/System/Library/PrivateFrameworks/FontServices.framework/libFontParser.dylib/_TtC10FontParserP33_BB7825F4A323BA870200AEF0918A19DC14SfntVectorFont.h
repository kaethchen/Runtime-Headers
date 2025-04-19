@class _TtC10FontParser13AnyVectorFont, NSArray, NSDictionary, NSData, NSString;

@interface _TtC10FontParserP33_BB7825F4A323BA870200AEF0918A19DC14SfntVectorFont : FontParser.AnyVectorFont {
    void /* unknown type, empty encoding */ font;
    void /* unknown type, empty encoding */ characterMap;
    void /* unknown type, empty encoding */ _info;
    void /* unknown type, empty encoding */ cacheLock;
    void /* unknown type, empty encoding */ glyphMap;
    void /* unknown type, empty encoding */ postTable;
}

@property (nonatomic, readonly) BOOL isSFNT;
@property (nonatomic, readonly) NSData *sfntData;
@property (nonatomic, readonly) NSArray *tableTags;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) NSString *postScriptName;
@property (nonatomic, readonly) NSString *nameTablePostScriptName;
@property (nonatomic, readonly) NSArray *additionalPostScriptNames;
@property (nonatomic, readonly) NSArray *allNames;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) const struct __CFDictionary { } *names;
@property (nonatomic, readonly) BOOL isBitmapOnly;
@property (nonatomic, readonly) BOOL isSuitcase;
@property (nonatomic, readonly) const struct __CFCharacterSet { } *characterSet;
@property (nonatomic, readonly) unsigned int protectionInfo;
@property (nonatomic, readonly) NSArray *type1Encoding;
@property (nonatomic, readonly) long long dataResidence;
@property (nonatomic, readonly) long long encodingType;
@property (nonatomic, readonly) NSDictionary *splicedStash;
@property (nonatomic, readonly) NSString *variationPostScriptNamePrefix;
@property (nonatomic, readonly) _TtC10FontParser13AnyVectorFont *defaultInstance;
@property (nonatomic, readonly) BOOL isNamedInstance;
@property (nonatomic, readonly) NSString *instanceName;
@property (nonatomic, readonly) unsigned short instanceNameID;
@property (nonatomic, readonly) BOOL hasNamedInstanceWithOpticalSize;
@property (nonatomic, readonly) NSArray *variationScalars;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canCreatePostScriptSubsetWithFormat:(long long)a0;
- (id)controlPointsWithGlyph:(unsigned int)a0;
- (id)copyBitmapWithGlyph:(unsigned int)a0 transform:(const struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a1 options:(unsigned int)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 bytesPerRow:(long long *)a4;
- (id)copyOriginalPathWithGlyph:(unsigned int)a0;
- (id)copyTableDataWithTag:(unsigned int)a0;
- (struct CGSize { double x0; double x1; })getDeviceAdvanceWithGlyph:(unsigned int)a0 transform:(const struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getDeviceBoundsWithGlyph:(unsigned int)a0 transform:(const struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a1;
- (struct CGFloat2 { double x0; double x1; })getIdealAdvanceAndSideBearingWithGlyph:(unsigned int)a0 vertical:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getIdealBoundsWithGlyph:(unsigned int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getIdealVerticalBoundsWithGlyph:(unsigned int)a0;
- (struct OS2UnicodeRanges { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; })getOS2UnicodeRangesWithMinCoveragePercent:(float)a0;
- (BOOL)getTrueTypeEncodingWithPlatform:(unsigned short)a0 script:(unsigned short)a1 indexMap:(void *)a2;
- (struct CGSize { double x0; double x1; })getVerticalDeviceAdvanceWithGlyph:(unsigned int)a0 transform:(const struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getVerticalDeviceBoundsWithGlyph:(unsigned int)a0 transform:(const struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a1;
- (struct CGSize { double x0; double x1; })getVerticalTranslateWithGlyph:(unsigned int)a0;
- (id)glyphNameWithGlyph:(unsigned short)a0;
- (unsigned short)variationAxisFlagsWithTag:(unsigned int)a0;
- (unsigned short)variationAxisNameIDWithTag:(unsigned int)a0;
- (double)variationScalarWithTupleIndex:(long long)a0;
- (id)variationWithPostScriptNameSuffix:(id)a0;

@end
