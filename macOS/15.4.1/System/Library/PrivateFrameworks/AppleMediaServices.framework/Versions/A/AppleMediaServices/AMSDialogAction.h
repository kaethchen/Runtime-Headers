@class AMSDialogRequest, NSString, NSDictionary, NSURL, NSMutableDictionary, NSURLRequest, AMSMetricsEvent;

@interface AMSDialogAction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (setter=ams_setCommerceUIURL:) BOOL ams_commerceUIURL;
@property (setter=ams_setActionType:) long long ams_actionType;
@property (retain, setter=ams_setBuyParams:) NSString *ams_buyParams;
@property (retain, setter=ams_setFormData:) NSDictionary *ams_formData;
@property (retain, setter=ams_setButtonDictionary:) NSDictionary *ams_buttonDictionary;
@property (retain, setter=ams_setMetricsDictionary:) NSDictionary *ams_metricsDictionary;
@property (retain, setter=ams_setRawURL:) NSURL *ams_rawURL;
@property (setter=ams_setResolvedInterruption:) BOOL ams_resolvedInterruption;
@property (setter=ams_setShouldRetry:) BOOL ams_shouldRetry;
@property (retain, setter=ams_setSubtarget:) NSString *ams_subtarget;
@property (setter=ams_setTidContinue:) BOOL ams_tidContinue;
@property (setter=ams_setURLType:) long long ams_URLType;
@property (copy) NSDictionary *clickstreamMetricsEvent;
@property (copy) NSURL *deepLink;
@property (copy) NSString *identifier;
@property BOOL inferLinkDestination;
@property (retain) NSString *kind;
@property (copy) AMSMetricsEvent *metricsEvent;
@property (copy) NSURLRequest *request;
@property long long style;
@property (copy) AMSDialogRequest *dialogRequest;
@property (copy) NSString *title;
@property (copy) NSURL *iconURL;
@property (copy) NSDictionary *parameters;
@property BOOL requiresDelegate;
@property (retain) NSMutableDictionary *userInfo;
@property (copy) NSString *accessibilityIdentifier;
@property BOOL shouldRetry;

+ (id)actionWithTitle:(id)a0;
+ (id)actionWithTitle:(id)a0 identifier:(id)a1;
+ (id)actionWithTitle:(id)a0 style:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
