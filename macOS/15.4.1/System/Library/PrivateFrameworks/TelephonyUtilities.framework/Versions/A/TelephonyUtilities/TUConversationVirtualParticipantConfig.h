@class NSString, NSData;

@interface TUConversationVirtualParticipantConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, copy, nonatomic) NSString *serverCertValidationEnabledUserDefaultsKey;
@property (class, readonly, copy, nonatomic) NSString *serverCertHostnameUserDefaultsKey;
@property (class, readonly, copy, nonatomic) NSString *serverCertLeafMarkerOIDUserDefaultsKey;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long connectionRetryIntervalMillis;
@property (readonly, nonatomic) unsigned long long connectionMaxAttempts;
@property (readonly, nonatomic) unsigned long long rpcStreamRetryIntervalMillis;
@property (readonly, nonatomic) unsigned long long rpcStreamMaxAttempts;
@property (readonly, nonatomic) BOOL serverCertValidationEnabled;
@property (readonly, copy, nonatomic) NSString *serverCertHostnameOverride;
@property (readonly, copy, nonatomic) NSString *serverCertLeafMarkerOIDOverride;
@property (copy, nonatomic) NSData *idsAliasingSalt;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConnectionRetryIntervalMillis:(unsigned long long)a0 connectionMaxAttempts:(unsigned long long)a1 rpcStreamRetryIntervalMillis:(unsigned long long)a2 rpcStreamMaxAttempts:(unsigned long long)a3 serverCertValidationEnabled:(BOOL)a4 serverCertHostnameOverride:(id)a5 serverCertLeafMarkerOIDOverride:(id)a6;
- (BOOL)isEqualToConversationVirtualParticipantConfig:(id)a0;

@end
