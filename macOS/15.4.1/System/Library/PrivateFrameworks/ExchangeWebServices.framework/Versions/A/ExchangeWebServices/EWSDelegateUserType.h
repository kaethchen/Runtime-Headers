@class EWSDelegatePermissionsType, NSString, EWSUserIdType;

@interface EWSDelegateUserType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSUserIdType *UserId;
@property (retain, nonatomic) EWSDelegatePermissionsType *DelegatePermissions;
@property (nonatomic) BOOL ReceiveCopiesOfMeetingMessages;
@property (nonatomic) BOOL ViewPrivateItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
