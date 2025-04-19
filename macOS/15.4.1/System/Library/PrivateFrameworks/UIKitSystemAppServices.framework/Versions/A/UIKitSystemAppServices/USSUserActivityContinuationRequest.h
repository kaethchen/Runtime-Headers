@class NSString, NSData;

@interface USSUserActivityContinuationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *activityUUID;
@property (retain, nonatomic) NSString *activityType;
@property (retain, nonatomic) NSData *activityData;

+ (id)requestWithUUID:(id)a0 activityType:(id)a1;
+ (id)requestWithUUID:(id)a0 activityType:(id)a1 activityData:(id)a2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 activityType:(id)a1 activityData:(id)a2;

@end
