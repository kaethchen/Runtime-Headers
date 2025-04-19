@class NSString, CWFChannel;

@interface CWFBackgroundScanNetwork : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *BSSID;
@property (nonatomic) BOOL entry;
@property (nonatomic) BOOL exit;
@property (copy, nonatomic) CWFChannel *channel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)JSONCompatibleKeyValueMap;
- (BOOL)isEqualToBackgroundScanNetwork:(id)a0;

@end
