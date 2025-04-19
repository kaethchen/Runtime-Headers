@class NSString, NSColor;

@interface PXCuratedLibraryLabelConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) NSColor *textColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
