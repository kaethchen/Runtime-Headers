@class NSURL;

@interface SUCoreEventReporterActive : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *serverURL;
@property (nonatomic) long long attemptedSendCount;
@property (nonatomic) long long failedSendCount;
@property (nonatomic) long long discoveredRunningCount;
@property (nonatomic) long long discoveredSuspendedCount;
@property (nonatomic) long long discoveredCancelingCount;

- (id)copy;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initFromArchivedData:(id)a0;
- (id)initWithServerURL:(id)a0;
- (id)toArchivedData;

@end
