@class NSColor, NSDictionary, NSFont;

@interface PXLabelSpec : PXViewSpec

@property (copy, nonatomic) NSColor *textColor;
@property (copy, nonatomic) NSFont *font;
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (copy, nonatomic) NSDictionary *fallbackTextAttributes;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) long long capitalization;
@property (nonatomic) long long fallbackCapitalization;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) BOOL allowTruncation;
@property (nonatomic) double minimumTruncatedScaleFactor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
