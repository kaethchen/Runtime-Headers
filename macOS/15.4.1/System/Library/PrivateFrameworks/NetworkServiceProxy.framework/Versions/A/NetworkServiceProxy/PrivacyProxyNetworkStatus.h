@class NSString;

@interface PrivacyProxyNetworkStatus : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long networkStatus;
@property int networkType;
@property (retain) NSString *networkName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)serialize;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initWithStatus:(unsigned long long)a0 type:(int)a1 name:(id)a2;
- (id)networkStatusString;
- (id)networkTypeString;

@end
