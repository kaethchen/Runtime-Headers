@interface CLEEDUploadServiceConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long numInFlightUploads;
@property (readonly, nonatomic) long long maxUploadFileSizeMB;
@property (readonly, nonatomic) long long maxUploadQuotaMB;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNumInflightUploads:(long long)a0 maxUploadFileSizeMB:(long long)a1 maxUploadQuotaMB:(long long)a2;

@end
