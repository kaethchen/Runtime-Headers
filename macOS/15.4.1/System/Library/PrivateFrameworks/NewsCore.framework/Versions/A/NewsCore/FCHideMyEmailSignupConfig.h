@class NSString, FCContentColorPair, FCConfigHyperlinkText;

@interface FCHideMyEmailSignupConfig : NSObject

@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) NSString *headline;
@property (readonly, nonatomic) double headlineLineSpacing;
@property (readonly, nonatomic) NSString *subheadline;
@property (readonly, nonatomic) NSString *ctaButtonText;
@property (readonly, nonatomic) FCConfigHyperlinkText *policyText;
@property (readonly, nonatomic) BOOL useChannelFont;
@property (readonly, nonatomic) FCContentColorPair *primaryColor;
@property (readonly, nonatomic) FCContentColorPair *secondaryColor;
@property (readonly, nonatomic) FCContentColorPair *tertiaryColor;
@property (readonly, nonatomic) FCContentColorPair *backgroundColor;

+ (id)defaultConfig;

- (void).cxx_destruct;
- (id)initDefault;
- (id)initWithConfigDictionary:(id)a0;

@end
