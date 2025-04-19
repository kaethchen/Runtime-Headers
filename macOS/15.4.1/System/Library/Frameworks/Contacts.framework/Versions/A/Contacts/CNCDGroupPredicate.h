@class NSString;

@interface CNCDGroupPredicate : CNPredicate <CNCDGroupPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateForGroupsWithNameMatching:(id)a0;

- (id)cn_coreDataPredicate;

@end
