@class NSString, NSURL;

@interface NSSharingCollaborationModeRestriction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL allowContinueToMode;
@property (readonly) long long disabledMode;
@property (readonly, copy) NSString *alertTitle;
@property (readonly, copy) NSString *alertMessage;
@property (readonly, copy) NSString *alertDismissButtonTitle;
@property (readonly, copy) NSString *alertRecoverySuggestionButtonTitle;
@property (readonly, copy) NSURL *alertRecoverySuggestionButtonLaunchURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionForMode:(long long)a0;
- (id)_initWithDisabledMode:(long long)a0 alertTitle:(id)a1 alertMessage:(id)a2 alertDismissButtonTitle:(id)a3 alertRecoverySuggestionButtonTitle:(id)a4 alertRecoverySuggestionButtonLaunchURL:(id)a5 allowContinueToMode:(BOOL)a6;
- (id)initWithDisabledMode:(long long)a0;
- (id)initWithDisabledMode:(long long)a0 alertTitle:(id)a1 alertMessage:(id)a2;
- (id)initWithDisabledMode:(long long)a0 alertTitle:(id)a1 alertMessage:(id)a2 alertDismissButtonTitle:(id)a3;
- (id)initWithDisabledMode:(long long)a0 alertTitle:(id)a1 alertMessage:(id)a2 alertDismissButtonTitle:(id)a3 alertContinueToModeButtonTitle:(id)a4;
- (id)initWithDisabledMode:(long long)a0 alertTitle:(id)a1 alertMessage:(id)a2 alertDismissButtonTitle:(id)a3 alertRecoverySuggestionButtonTitle:(id)a4 alertRecoverySuggestionButtonLaunchURL:(id)a5;

@end
