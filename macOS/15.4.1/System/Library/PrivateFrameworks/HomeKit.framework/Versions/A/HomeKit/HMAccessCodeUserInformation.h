@class HMUser, NSString, NSUUID, NSArray, HMRemovedUserInfo;

@interface HMAccessCodeUserInformation : NSObject <HMFObject>

@property (readonly, copy) NSString *simpleLabel;
@property (readonly, copy) NSUUID *labelIdentifier;
@property (readonly) HMUser *user;
@property (readonly, copy) HMRemovedUserInfo *removedUserInfo;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)userInformationWithValue:(id)a0 home:(id)a1;

- (void).cxx_destruct;
- (id)initWithUser:(id)a0;
- (id)createAccessCodeUserInformationValue;
- (id)initWithRemovedUserInfo:(id)a0;
- (id)initWithSimpleLabel:(id)a0;
- (id)initWithSimpleLabel:(id)a0 labelIdentifier:(id)a1;
- (id)initWithSimpleLabel:(id)a0 labelIdentifier:(id)a1 user:(id)a2 removedUserInfo:(id)a3;

@end
