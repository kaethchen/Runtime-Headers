@class NSDate, NSString, NSBundle, NSURL, NSDictionary, NSNumber, LSiTunesMetadata;

@interface GKApplicationProxy : NSObject

@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSURL *bundleURL;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSString *bundleVersion;
@property (retain, nonatomic) NSString *bundleShortVersion;
@property (retain, nonatomic) LSiTunesMetadata *iTunesMetadata;
@property (readonly, retain, nonatomic) NSNumber *adamID;
@property (readonly, retain, nonatomic) NSNumber *externalVersion;
@property (readonly, retain, nonatomic) NSDate *purchaseDate;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (readonly, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled;
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;

+ (id)applicationProxyForBundleID:(id)a0;
+ (id)metadataForBundleURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0;

@end
