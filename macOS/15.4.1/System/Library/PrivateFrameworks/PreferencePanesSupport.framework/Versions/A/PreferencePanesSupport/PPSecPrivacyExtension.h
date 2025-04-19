@class NSString;

@interface PPSecPrivacyExtension : NSObject <PPSecPrivacyExtension>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginRequestWithExtensionContext:(id)a0;
- (id)legalDisclosureButtonTitle;
- (id)legalDisclosureIdentifiers;
- (id)serviceSummary;
- (BOOL)wantsAuthorization;

@end
