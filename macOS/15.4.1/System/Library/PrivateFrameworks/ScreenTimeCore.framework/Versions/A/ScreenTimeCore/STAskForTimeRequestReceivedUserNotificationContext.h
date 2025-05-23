@class NSString, NSNumber;

@interface STAskForTimeRequestReceivedUserNotificationContext : STUserNotificationContext

@property (copy, nonatomic) NSString *childName;
@property (retain, nonatomic) NSNumber *childDSID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_fetchAndWriteFamilyPhotoURLIfNeeded:(id /* block */)a0;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)initWithAskForTimeRequestIdentifier:(id)a0 childName:(id)a1 childDSID:(id)a2 requestedResourceName:(id)a3;
- (id)initWithAskForTimeRequestIdentifier:(id)a0 familyMember:(id)a1 requestedResourceName:(id)a2;

@end
