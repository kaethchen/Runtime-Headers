@class NSString;

@interface CNCDMeContactPredicate : CNPredicate <CNCDContactPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shortDebugDescription;
- (id)cn_coreDataPredicate;

@end
