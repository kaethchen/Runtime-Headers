@class NSString, NSArray, NSURL, SFRichText;

@interface SSApplicationResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSURL *appURL;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *matchedAlternateName;
@property (retain, nonatomic) NSArray *alternateNames;
@property (retain, nonatomic) SFRichText *highlightedAlternateName;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (id)formattedAlternateNamesForBundleId:(id)a0 withAlternateNames:(id)a1;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildBadgingImageWithThumbnail:(id)a0;
- (id)buildFootnote;
- (id)buildThumbnail;
- (id)buildTitle;

@end
