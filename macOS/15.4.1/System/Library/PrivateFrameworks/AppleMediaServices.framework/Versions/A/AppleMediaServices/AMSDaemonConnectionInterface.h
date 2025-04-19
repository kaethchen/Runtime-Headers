@interface AMSDaemonConnectionInterface : NSObject

+ (id)interface;
+ (id)_deviceMessengerClientInterface;
+ (id)_accountCachedServerDataInterface;
+ (id)_accountManagementInterface;
+ (id)_accountSignOutInterface;
+ (void)_configureURLPresentationDelegateClasses:(id)a0;
+ (id)_cookieServiceInterface;
+ (id)_deviceMessengerServiceInterface;
+ (id)_dismissQRDialogServiceInterface;
+ (id)_fraudReportServiceInterface;
+ (id)_keychainServiceInterface;
+ (id)_paymentConfirmationInterface;
+ (id)_paymentValidationServiceInterface;
+ (id)_purchaseServiceInterface;
+ (id)_securityClientInterface;
+ (id)_securityServiceInterface;
+ (void)_setUpSecurityInterfaceApplePayClassic:(id)a0;
+ (void)_setUpSecurityInterfaceBiometricSelectors:(id)a0;
+ (void)_setUpSecurityInterfaceDeviceIdentitySelectors:(id)a0;
+ (void)_setUpSecurityInterfaceHandleResponseSelector:(id)a0;
+ (void)_setUpSecurityInterfaceSignedHeadersSelector:(id)a0;
+ (void)_setUpSecurityInterfaceSilentEnrollmentSelector:(id)a0;

@end
