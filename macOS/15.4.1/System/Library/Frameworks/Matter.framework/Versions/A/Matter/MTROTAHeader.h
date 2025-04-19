@class NSNumber, NSString, NSData;

@interface MTROTAHeader : NSObject

@property (copy, nonatomic) NSNumber *vendorID;
@property (copy, nonatomic) NSNumber *productID;
@property (copy, nonatomic) NSNumber *payloadSize;
@property (copy, nonatomic) NSNumber *softwareVersion;
@property (copy, nonatomic) NSString *softwareVersionString;
@property (copy, nonatomic) NSString *releaseNotesURL;
@property (copy, nonatomic) NSData *imageDigest;
@property (nonatomic) unsigned long long imageDigestType;
@property (copy, nonatomic) NSNumber *minApplicableVersion;
@property (copy, nonatomic) NSNumber *maxApplicableVersion;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
