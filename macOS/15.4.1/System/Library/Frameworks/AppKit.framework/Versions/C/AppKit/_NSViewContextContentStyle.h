@interface _NSViewContextContentStyle : NSAppearanceContentStyle {
    long long _backgroundStyle;
    long long _semanticContext;
    unsigned long long _windowStyleMask;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (int)_backgroundStyleForRenderingIntent:(long long)a0;
- (id)initWithBackgroundStyle:(long long)a0 semanticContext:(long long)a1 windowStyleMask:(unsigned long long)a2;

@end
