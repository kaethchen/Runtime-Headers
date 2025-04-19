@class NSDictionary, NSDate;

@interface SPDelegatedLocationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *lastUploadTimestamp;
@property (copy, nonatomic) NSDictionary *locationsByUuids;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimestamp:(id)a0;
- (id)initWithResults:(id)a0;

@end
