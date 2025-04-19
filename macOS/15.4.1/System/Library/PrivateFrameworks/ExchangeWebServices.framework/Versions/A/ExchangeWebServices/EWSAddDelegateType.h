@class NSArray;

@interface EWSAddDelegateType : EWSBaseDelegateType

@property (copy, nonatomic) NSArray *DelegateUsers;
@property (nonatomic) long long DeliverMeetingRequests;

+ (id)definition;

- (void).cxx_destruct;

@end
