@class EWSDelegateUserType;

@interface EWSDelegateUserResponseMessageType : EWSResponseMessageType

@property (retain, nonatomic) EWSDelegateUserType *DelegateUser;

+ (id)definition;

- (void).cxx_destruct;

@end
