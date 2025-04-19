@class NSArray, NSDictionary, NSDate;

@interface KTStatusResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long optIn;
@property unsigned long long serverOptIn;
@property unsigned long long accountStatus;
@property unsigned long long systemStatus;
@property unsigned long long selfStatus;
@property unsigned long long idsAccountStatus;
@property BOOL pendingStatusChanges;
@property BOOL optInState;
@property (retain) NSArray *recentFailedEventIds;
@property (retain) NSDate *expectedSelfResolutionDate;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
