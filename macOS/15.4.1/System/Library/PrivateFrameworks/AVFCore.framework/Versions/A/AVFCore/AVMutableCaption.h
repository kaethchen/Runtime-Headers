@class NSString, AVMutableCaptionInternal;

@interface AVMutableCaption : AVCaption {
    AVMutableCaptionInternal *_mutableInternal;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)animation;
- (void)setRegion:(id)a0;
- (void)setTextAlignment:(long long)a0;
- (long long)textAlignment;
- (void)setAnimation:(long long)a0;
- (void)removeBackgroundColorInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeDecorationInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeFontStyleInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeFontWeightInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeRuby:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeRubyInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeTextColorInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeTextCombineInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setBackgroundColor:(struct CGColor { } *)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setDecoration:(unsigned long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setFontStyle:(long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setFontWeight:(long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setRuby:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setTextColor:(struct CGColor { } *)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setTextCombine:(long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
