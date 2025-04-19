@class NSString;

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration {
    int _shouldRespectOutputBlending;
}

@property (copy, nonatomic) NSString *backgroundType;
@property (nonatomic) BOOL effectShowsValue;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)setShouldRespectOutputBlending:(BOOL)a0;
- (void)setSelectionType:(long long)a0;
- (BOOL)shouldIgnoreForegroundColor;
- (BOOL)shouldRespectOutputBlending;

@end
