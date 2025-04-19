@class NSString, NSTextField;

@interface PXTitleEditor : NSObject

@property (retain, nonatomic) NSTextField *titleTextField;
@property (retain, nonatomic) NSTextField *subtitleTextField;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titlePlaceholder;
@property (nonatomic) BOOL includesSubtitle;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *subtitlePlaceholder;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) NSString *confirmButtonTitle;
@property (copy, nonatomic) id /* block */ validation;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)init;
- (void).cxx_destruct;
- (void)presentFromViewController:(id)a0;
- (void)handleResponse:(long long)a0;
- (void)_handleSuccess:(BOOL)a0;
- (void)_updateExposedProperties;
- (id)createAlert;

@end
