@class NSString, AVCaptionInternal;

@interface AVCaption : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    AVCaptionInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct OpaqueFigCaptionData { } *_figCaptionData;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;

+ (void)_appendFigStyleKey:(struct __CFString { } *)a0 value:(void *)a1 range:(struct { long long x0; long long x1; })a2 toArray:(id)a3;
+ (id)captionFromFigCaption:(struct OpaqueFigCaption { } *)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)animation;
- (long long)textAlignment;
- (id)region;
- (void)_setAnimation:(long long)a0;
- (void)_setBackgroundColor:(struct CGColor { } *)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_setDecoration:(unsigned long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_setFontStyle:(long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_setFontWeight:(long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_setRegion:(id)a0;
- (void)_setRuby:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_setStylePropertiesForArchive:(id)a0;
- (void)_setText:(id)a0;
- (void)_setTextAlignment:(long long)a0;
- (void)_setTextColor:(struct CGColor { } *)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_setTextCombine:(long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_setTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)_stylePropertiesForArchive;
- (struct CGColor { } *)backgroundColorAtIndex:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct CGColor { } *)copyBackgroundColorAtIndex:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct CGColor { } *)copyTextColorAtIndex:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (unsigned long long)decorationAtIndex:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (long long)fontStyleAtIndex:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (long long)fontWeightAtIndex:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)initWithFigCaptionData:(struct OpaqueFigCaptionData { } *)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)initWithFigMutableCaptionData:(struct OpaqueFigCaptionData { } *)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)initWithText:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)rubyAtIndex:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)rubyTextAtIndex:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct CGColor { } *)textColorAtIndex:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (long long)textCombineAtIndex:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;

@end
