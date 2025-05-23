@class NSString, NSDictionary, NSURL, NetworkQualityConfiguration;

@interface NPTPerformanceTestConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSURL *privateDownloadURL;
    NSURL *privateUploadURL;
    NSString *privatePingHost;
    NSString *privateClientName;
    BOOL privateLegacyMode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NetworkQualityConfiguration *NQConfiguration;
@property (readonly, nonatomic) NetworkQualityConfiguration *NQDownloadConfiguration;
@property (readonly, nonatomic) NetworkQualityConfiguration *NQUploadConfiguration;
@property (retain, nonatomic) NSString *interfaceName;
@property (nonatomic) BOOL forceWiFi;
@property (nonatomic) BOOL useSecureConnection;
@property (nonatomic) int downloadSize;
@property (nonatomic) int uploadSize;
@property (nonatomic) unsigned long long pingCount;
@property (nonatomic) int pingAddressStyle;
@property (nonatomic) BOOL collectMetadata;
@property (nonatomic) long long concurrentStreams;
@property (retain, nonatomic) NSURL *downloadURL;
@property (retain, nonatomic) NSURL *uploadURL;
@property (retain, nonatomic) NSString *pingHost;
@property (nonatomic) int interfaceType;
@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long testDuration;
@property (nonatomic) BOOL endWhenStable;
@property (nonatomic) BOOL stopAtFileSize;
@property (nonatomic) BOOL collectWRMMetrics;
@property (nonatomic) BOOL legacyMode;
@property (nonatomic) BOOL multiStream;
@property (readonly, nonatomic) NSDictionary *asDictionary;
@property (retain, nonatomic) NSString *bonjourHost;

+ (id)defaultConfiguration;
+ (id)defaultConfigurationCellular;
+ (id)defaultConfigurationWiFi;
+ (id)defaultConfigurationWiredEthernet;
+ (id)evaluateInterfaceName:(int)a0;
+ (id)fileSizeConfigurationWithTimeout:(int)a0 timeout:(unsigned long long)a1 downloadFileSize:(int)a2 uploadFileSize:(int)a3;
+ (id)interfaceServiceName:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cdnDownloadURL;
- (id)cdnUploadURL;
- (BOOL)customURLSet;

@end
