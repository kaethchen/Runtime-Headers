@class NSString, NSArray;

@interface InstalledApp : NSObject

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSArray *supportedMediaCategories;
@property (retain, nonatomic) NSArray *supportedIntents;
@property (retain, nonatomic) NSString *appName;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 supportedMediaCategories:(id)a1 supportedIntents:(id)a2 appName:(id)a3;

@end
