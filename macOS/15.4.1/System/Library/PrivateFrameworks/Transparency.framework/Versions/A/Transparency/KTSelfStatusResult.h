@class NSArray, NSString, NSDictionary;

@interface KTSelfStatusResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long optIn;
@property BOOL everOptIn;
@property unsigned long long serverOptIn;
@property unsigned long long accountStatus;
@property unsigned long long systemStatus;
@property unsigned long long selfStatus;
@property unsigned long long idsAccountStatus;
@property (retain) NSArray *selfDevices;
@property (retain) NSString *accountKey;
@property BOOL pendingStatusChanges;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;

- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)simpleStatus;

@end
