@class NSString, NSURL, NSData;

@interface STAppInfo : NSObject

@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) short platform;
@property (copy, nonatomic) NSString *distributorID;
@property (nonatomic) BOOL distributorIsThirdParty;
@property (nonatomic) unsigned long long adamID;
@property (nonatomic) unsigned long long versionIdentifier;
@property (nonatomic) unsigned long long betaVersionIdentifier;
@property (copy, nonatomic) NSString *developerName;
@property (copy, nonatomic) NSString *ratingLabel;
@property (copy, nonatomic) NSURL *localURL;
@property (copy, nonatomic) NSURL *artworkURL;
@property (copy) NSData *artworkData;

- (id)description;
- (void).cxx_destruct;

@end
