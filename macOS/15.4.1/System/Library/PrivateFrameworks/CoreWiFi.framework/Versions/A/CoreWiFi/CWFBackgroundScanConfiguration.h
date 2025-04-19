@class NSString, NSArray;

@interface CWFBackgroundScanConfiguration : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct { unsigned char channels : 1; unsigned char networks : 1; unsigned char cacheEnabled : 1; unsigned char cacheRollover : 1; unsigned char scanFrequency : 1; unsigned char lostNetworkScanCount : 1; } modifyMap;
@property (copy, nonatomic) NSArray *networks;
@property (copy, nonatomic) NSArray *channels;
@property (nonatomic) BOOL cacheEnabled;
@property (nonatomic) BOOL cacheRollover;
@property (nonatomic) unsigned long long scanFrequency;
@property (nonatomic) unsigned long long lostNetworkScanCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)merge:(id)a0;
- (BOOL)modified;
- (id)JSONCompatibleKeyValueMap;
- (BOOL)isEqualToBackgroundScanConfiguration:(id)a0;

@end
