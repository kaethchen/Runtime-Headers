@class NSString;

@interface CNContainerOfContactPredicate : CNPredicate <CNCDContainerPredicate>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)cn_coreDataPredicate;
- (id)cn_persistenceFilterRequest;
- (id)cn_secondaryRecursePredicate;
- (id)cn_topLevelFilter;

@end
