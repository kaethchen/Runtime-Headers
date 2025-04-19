@class NSString;

@interface ATXNowPlayingDuetEvent : ATXDuetEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *track;
@property (readonly, nonatomic) long long nowPlayingState;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)initWithDKEvent:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithBundleId:(id)a0 track:(id)a1 nowPlayingState:(long long)a2 startDate:(id)a3 endDate:(id)a4;
- (id)initWithCurrentContextStoreValues;

@end
