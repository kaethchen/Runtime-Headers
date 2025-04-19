@class NSArray;

@interface EWSUpdateDelegateType : EWSBaseDelegateType

@property (copy, nonatomic) NSArray *DelegateUsers;
@property (nonatomic) long long DeliverMeetingRequests;

+ (id)definition;

- (void).cxx_destruct;

@end
