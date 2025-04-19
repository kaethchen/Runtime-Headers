@class NSString, NSArray;

@interface NSParagraphStyle : NSObject <_NSParagraphStyleMarkdownSettings, NSCopying, NSMutableCopying, NSSecureCoding> {
    double _lineSpacing;
    double _paragraphSpacing;
    double _headIndent;
    double _tailIndent;
    double _firstLineHeadIndent;
    double _minimumLineHeight;
    double _maximumLineHeight;
    NSArray *_tabStops;
    struct { unsigned char alignment : 4; unsigned char lineBreakMode : 4; unsigned char tabStopsIsMutable : 1; unsigned char isNaturalDirection : 1; unsigned char rightToLeftDirection : 1; unsigned char fixedMultiple : 2; unsigned char tightensForTruncation : 1; unsigned int refCount : 18; unsigned int  : 32; } _flags;
    double _defaultTabInterval;
    id _extraData;
}

@property (class, readonly, copy) NSParagraphStyle *defaultParagraphStyle;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *codeBlockIntentLanguageHint;
@property (readonly, copy) NSArray *_presentationIntents;
@property (readonly, copy) NSArray *presentationIntents;
@property (readonly) long long _listIntentOrdinal;
@property (readonly) long long listIntentOrdinal;
@property (readonly) long long headerLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long alignment;
@property (readonly) float tighteningFactorForTruncation;
@property (readonly, copy) NSArray *textBlocks;
@property (readonly) long long headerLevel;
@property (readonly) double lineSpacing;
@property (readonly) double paragraphSpacing;
@property (readonly) double headIndent;
@property (readonly) double tailIndent;
@property (readonly) double firstLineHeadIndent;
@property (readonly) double minimumLineHeight;
@property (readonly) double maximumLineHeight;
@property (readonly) unsigned long long lineBreakMode;
@property (readonly) long long baseWritingDirection;
@property (readonly) double lineHeightMultiple;
@property (readonly) double paragraphSpacingBefore;
@property (readonly) float hyphenationFactor;
@property (readonly) BOOL usesDefaultHyphenation;
@property (readonly, copy) NSArray *tabStops;
@property (readonly) double defaultTabInterval;
@property (readonly, copy) NSArray *textLists;
@property (readonly) BOOL allowsDefaultTighteningForTruncation;
@property (readonly) unsigned long long lineBreakStrategy;

+ (void)initialize;
+ (long long)defaultWritingDirectionForLanguage:(id)a0;
+ (float)_defaultHyphenationFactor;
+ (long long)_defaultWritingDirection;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_lineBoundsOptions;
- (long long)compositionLanguage;
- (long long)horizontalAlignment;
- (BOOL)isFullyJustified;
- (void)_allocExtraData;
- (BOOL)_alignmentFollowsWritingDirection;
- (id)_initWithParagraphStyle:(id)a0;
- (BOOL)_isSuitableForFastStringDrawingWithAlignment:(long long *)a0 mirrorsTextAlignment:(BOOL)a1 lineBreakMode:(unsigned long long *)a2 tighteningFactorForTruncation:(double *)a3;
- (BOOL)allowsHangingPunctuation;
- (long long)secondaryLineBreakMode;
- (BOOL)spansAllLines;
- (BOOL)usesOpticalAlignment;

@end
