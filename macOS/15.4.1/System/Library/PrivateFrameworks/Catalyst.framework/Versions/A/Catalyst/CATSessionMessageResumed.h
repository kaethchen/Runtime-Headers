@class NSUUID, NSDictionary, NSArray;

@interface CATSessionMessageResumed : CATSessionMessage

@property (copy, nonatomic) NSUUID *sessionUUID;
@property (copy, nonatomic) NSDictionary *serverUserInfo;
@property (copy, nonatomic) NSArray *pendingRemoteTaskUUIDs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionUUID:(id)a0;

@end
