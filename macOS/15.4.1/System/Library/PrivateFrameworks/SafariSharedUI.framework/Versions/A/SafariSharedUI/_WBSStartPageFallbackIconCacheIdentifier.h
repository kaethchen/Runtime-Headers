@class WBSTemplateIconMonogramConfiguration, NSString, NSImage;

@interface _WBSStartPageFallbackIconCacheIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) WBSTemplateIconMonogramConfiguration *configuration;
@property (readonly, nonatomic) struct CGSize { double width; double height; } imageSize;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, nonatomic) NSImage *baseImage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 title:(id)a2 url:(id)a3 baseImage:(id)a4;

@end
