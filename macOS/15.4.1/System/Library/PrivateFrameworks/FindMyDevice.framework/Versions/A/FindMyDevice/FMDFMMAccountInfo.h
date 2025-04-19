@class NSString, NSDictionary;

@interface FMDFMMAccountInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *dsid;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *fmmAuthToken;
@property (retain, nonatomic) NSDictionary *additionalInfo;
@property (retain, nonatomic) NSString *fmdServerHost;
@property (retain, nonatomic) NSString *fmdServerProtocolScheme;
@property (retain, nonatomic) NSString *fmdAPSEnvironment;
@property (retain, nonatomic) NSString *fmdIDSIdentifier;
@property (retain, nonatomic) NSString *rootVolumeUUID;
@property (retain, nonatomic) NSString *userGUID;
@property (nonatomic) unsigned int uid;
@property (readonly, nonatomic) BOOL hasMandatoryInfo;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
