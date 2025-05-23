@class NSString, NSURL, NSDate;

@interface WLKFederatedPunchout : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *channelID;
@property (nonatomic, getter=isConsented) BOOL consented;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *appAdamID;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *externalContentID;
@property (retain, nonatomic) NSString *canonicalID;
@property (nonatomic) unsigned long long resumeTimeSeconds;
@property (retain, nonatomic) NSDate *punchoutTime;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
