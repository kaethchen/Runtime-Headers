@interface ASDSupportedDialogHandlers : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL handlesAlerts;
@property (readonly) BOOL handlesAuthentication;
@property (readonly) BOOL handlesDialogs;
@property (readonly) BOOL handlesEngagement;
@property (readonly) BOOL handlesViews;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForInternalClient;
- (id)initWithDialogObserver:(id)a0;

@end
