@class NSString, NSUserDefaults;

@interface TVISAerialServiceDefaults : NSObject

@property (readonly, nonatomic) NSString *mode;
@property (readonly, nonatomic) NSUserDefaults *defaults;

- (void).cxx_destruct;
- (id)initWithMode:(id)a0;
- (id)activeCategoryIDs;
- (void)addActiveCategoryIDs:(id)a0;
- (id)nextScheduledAssetDownloadDate;
- (id)nextScheduledManifestDownloadDate;
- (void)removeActiveCategoryIDs:(id)a0;
- (void)setNextScheduledAssetDownloadDate:(id)a0;
- (void)setNextScheduledManifestDownloadDate:(id)a0;

@end
