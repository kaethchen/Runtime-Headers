@class NSUUID, NSString;

@interface HMMHomeLogEvent : HMMLogEvent

@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) NSString *homeUUIDString;

- (void).cxx_destruct;
- (id)initWithHomeUUID:(id)a0;
- (id)initWithStartTime:(double)a0 homeUUID:(id)a1;

@end
