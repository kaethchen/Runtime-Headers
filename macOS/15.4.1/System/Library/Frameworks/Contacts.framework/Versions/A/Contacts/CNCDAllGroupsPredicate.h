@class NSString;

@interface CNCDAllGroupsPredicate : CNPredicate <CNCDGroupPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cn_coreDataPredicate;

@end
