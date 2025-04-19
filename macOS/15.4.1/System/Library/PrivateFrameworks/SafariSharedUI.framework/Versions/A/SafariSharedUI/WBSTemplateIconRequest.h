@class NSString, WBSTemplateIconMonogramConfiguration, NSColor;

@interface WBSTemplateIconRequest : WBSSiteMetadataRequest

@property (readonly, copy, nonatomic) NSString *monogramTitle;
@property (readonly, nonatomic) WBSTemplateIconMonogramConfiguration *monogramConfiguration;
@property (readonly, nonatomic) NSColor *overrideForegroundColor;

- (id)initWithURL:(id)a0 title:(id)a1 monogramConfiguration:(id)a2 overrideForegroundColor:(id)a3;

@end
