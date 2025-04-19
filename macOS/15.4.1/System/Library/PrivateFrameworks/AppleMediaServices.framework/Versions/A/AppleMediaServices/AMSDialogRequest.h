@class AMSDialogAction, NSArray, NSDictionary, NSURL, NSString, AMSMetricsEvent;

@interface AMSDialogRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL allowsNativeWatchCancelPlacement;
@property (readonly) NSDictionary *appearanceInfo;
@property (copy) NSArray *buttonActions;
@property (retain) AMSDialogAction *cancelAction;
@property (copy) NSDictionary *clickstreamMetricsEvent;
@property (retain) AMSDialogAction *defaultAction;
@property (copy) NSURL *iconBundleURL;
@property (copy) NSURL *iconURL;
@property (copy) NSString *identifier;
@property (copy) NSString *logKey;
@property (copy) NSString *message;
@property (copy) NSString *messageAccessibilityLabel;
@property (copy) AMSMetricsEvent *metricsEvent;
@property (copy) NSString *preferredButtonActionIdentifier;
@property BOOL preventsCancelButtonStyle;
@property long long style;
@property (copy) NSString *systemSymbolName;
@property (copy) NSArray *textFields;
@property (copy) NSString *title;
@property (copy) NSString *titleAccessibilityLabel;
@property (copy) NSDictionary *userInfo;

+ (id)requestWithTitle:(id)a0 message:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1;
- (void)addButtonAction:(id)a0;
- (void)addTextField:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1 appearanceInfo:(id)a2;
- (id)locateActionWithIdentifier:(id)a0;
- (void)replaceAction:(id)a0;

@end
