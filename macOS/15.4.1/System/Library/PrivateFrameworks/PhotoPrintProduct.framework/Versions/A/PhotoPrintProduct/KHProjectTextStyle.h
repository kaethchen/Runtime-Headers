@class NSString;

@interface KHProjectTextStyle : KHModel {
    long long _projectId;
    long long _styleId;
    NSString *_font;
    long long _fontSize;
    double _leading;
    double _kerning;
    long long _verticalAlignment;
    long long _horizontalAlignment;
    NSString *_color;
    double _lineSpacing;
    NSString *_styleIdentifier;
}

- (void)dealloc;
- (void)setLineSpacing:(double)a0;
- (id)color;
- (double)lineSpacing;
- (void)setColor:(id)a0;
- (double)leading;
- (id)clone;
- (id)font;
- (long long)fontSize;
- (long long)horizontalAlignment;
- (void)setFont:(id)a0;
- (void)setFontSize:(long long)a0;
- (void)setHorizontalAlignment:(long long)a0;
- (void)setVerticalAlignment:(long long)a0;
- (long long)verticalAlignment;
- (double)kerning;
- (long long)styleId;
- (void)setKerning:(double)a0;
- (void)setStyleId:(long long)a0;
- (long long)projectId;
- (void)setProjectId:(long long)a0;
- (void)setLeading:(double)a0;
- (id)styleIdentifier;
- (void)setStyleIdentifier:(id)a0;
- (void)cacheProjectId:(long long)a0;
- (void)cacheColor:(id)a0;
- (void)cacheColumns:(long long)a0;
- (void)cacheFont:(id)a0;
- (void)cacheFontSize:(long long)a0;
- (void)cacheHorizontalAlignment:(long long)a0;
- (void)cacheKerning:(double)a0;
- (void)cacheLeading:(double)a0;
- (void)cacheLineSpacing:(double)a0;
- (void)cacheStyleId:(long long)a0;
- (void)cacheStyleIdentifier:(id)a0;
- (void)cacheVerticalAlignment:(long long)a0;
- (id)cloneInDatabase:(id)a0;
- (BOOL)isProjectModel;

@end
