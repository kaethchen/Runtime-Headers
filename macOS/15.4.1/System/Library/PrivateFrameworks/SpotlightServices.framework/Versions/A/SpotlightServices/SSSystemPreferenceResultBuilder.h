@class NSString;

@interface SSSystemPreferenceResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *preferenceDescription;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildThumbnail;

@end
