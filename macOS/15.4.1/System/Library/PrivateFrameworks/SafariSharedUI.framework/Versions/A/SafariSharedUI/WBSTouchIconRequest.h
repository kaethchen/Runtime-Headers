@class WBSTemplateIconMonogramConfiguration, NSString;

@interface WBSTouchIconRequest : WBSSiteMetadataRequest <WBSIconRequest>

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) struct CGSize { double width; double height; } minimumIconSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } maximumIconSize;
@property (readonly, nonatomic) WBSTemplateIconMonogramConfiguration *monogramConfiguration;
@property (readonly, copy, nonatomic) NSString *monogramTitle;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeForDrawing;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestWithTitle:(id)a0 url:(id)a1 minimumIconSize:(struct CGSize { double x0; double x1; })a2 maximumIconSize:(struct CGSize { double x0; double x1; })a3 options:(unsigned long long)a4;
+ (id)requestWithTitle:(id)a0 url:(id)a1 minimumIconSize:(struct CGSize { double x0; double x1; })a2 maximumIconSize:(struct CGSize { double x0; double x1; })a3;
+ (id)requestWithTitle:(id)a0 url:(id)a1 minimumIconSize:(struct CGSize { double x0; double x1; })a2 maximumIconSize:(struct CGSize { double x0; double x1; })a3 monogramConfiguration:(id)a4 options:(unsigned long long)a5;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 url:(id)a1 minimumIconSize:(struct CGSize { double x0; double x1; })a2 maximumIconSize:(struct CGSize { double x0; double x1; })a3 monogramConfiguration:(id)a4 options:(unsigned long long)a5;
- (id)initWithTitle:(id)a0 url:(id)a1 minimumIconSize:(struct CGSize { double x0; double x1; })a2 maximumIconSize:(struct CGSize { double x0; double x1; })a3;
- (id)initWithTitle:(id)a0 url:(id)a1 minimumIconSize:(struct CGSize { double x0; double x1; })a2 maximumIconSize:(struct CGSize { double x0; double x1; })a3 options:(unsigned long long)a4;

@end
