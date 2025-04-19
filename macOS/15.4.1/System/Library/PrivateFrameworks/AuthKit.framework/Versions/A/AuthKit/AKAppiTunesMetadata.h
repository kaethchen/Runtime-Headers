@class NSString;

@interface AKAppiTunesMetadata : NSObject

@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appDeveloperName;
@property (copy, nonatomic) NSString *adamID;
@property (copy, nonatomic) NSString *privacyURL;
@property (nonatomic) BOOL hasEula;
@property (readonly, copy, nonatomic) NSString *eula;

- (void).cxx_destruct;
- (id)initWithBundleId:(id)a0 shortName:(id)a1 appName:(id)a2 appDeveloperName:(id)a3 adamID:(id)a4;

@end
