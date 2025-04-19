@class MCText, NSObject, MPTextInternal;
@protocol MPEffectSupport;

@interface MPText : NSObject <NSSecureCoding, NSCopying> {
    MCText *_text;
    MPTextInternal *_internal;
    NSObject<MPEffectSupport> *_parent;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)textWithAttributedString:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAttributedString:(id)a0;
- (long long)index;
- (void)dump;
- (id)initWithAttributedString:(id)a0;
- (id)action;
- (id)attributedString;
- (id)text;
- (double)displayTime;
- (double)maxFontSize;
- (void)setParent:(id)a0;
- (void)setText:(id)a0;
- (id)defaultString;
- (BOOL)isOriginal;
- (id)plainString;
- (void)setPlainString:(id)a0;
- (double)displayStartTime;
- (double)displayDuration;
- (void)checkForMaxFontSize;
- (void)checkForPlacesLabel;
- (void)copyStruct:(id)a0;
- (id)fullDebugLog;
- (id)nearestPlug;
- (id)parentEffect;
- (id)subtitleSlide;
- (double)textAreaAspectRatio;

@end
