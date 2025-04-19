@interface DMTProximityDEPEnrollmentTemplateFactory : NSObject

+ (id)billboardColorForTemplate:(id)a0;
+ (id)enrollingTemplateViewWithOrganizationName:(id)a0 localizedOrganizationType:(id)a1;
+ (id)fatalErrorTemplateView;
+ (id)fatalErrorViewControllerWithError:(id)a0;
+ (void)invertVisualStateIfNeeded:(id)a0;
+ (id)pairingTemplateBodyTextForDisplayMode:(long long)a0;
+ (id)pairingTemplateViewWithDisplayedPIN:(id)a0;
+ (void)startAnimatingIfNeeded:(id)a0;
+ (void)stopAnimatingIfNeeded:(id)a0;
+ (id)successTemplateViewWithOrganizationName:(id)a0 localizedOrganizationType:(id)a1 mdmServerName:(id)a2;

@end
