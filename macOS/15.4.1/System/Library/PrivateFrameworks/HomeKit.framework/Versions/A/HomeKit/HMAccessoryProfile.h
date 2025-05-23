@class NSUUID, NSArray, HMAccessory, NSString, _HMAccessoryProfile;

@interface HMAccessoryProfile : NSObject <HMObjectMerge>

@property (readonly, nonatomic) _HMAccessoryProfile *accessoryProfile;
@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSArray *services;
@property (readonly, weak, nonatomic) HMAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)assistantIdentifier;
- (void)handleRuntimeStateUpdate:(id)a0;
- (id)initWithAccessoryProfile:(id)a0;
- (BOOL)mergeFromNewObject:(id)a0;
- (id)profileUniqueIdentifier;
- (void)recomputeAssistantIdentifier;
- (void)refreshStateWithCompletionHandler:(id /* block */)a0;

@end
