@class NSString;

@interface SSCoreSuggestionsContactResultBuilder : SSContactResultBuilder

@property (retain, nonatomic) NSString *suggestedContactIdentifier;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)buildBadgingImageWithThumbnail:(id)a0;

@end
