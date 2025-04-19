@class NSString;

@interface PXCPLCloudQuotaSource : PXObservable

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSString *customTitle;
@property (readonly, nonatomic) NSString *customMessage;
@property (readonly, nonatomic) NSString *customActionTitle;

- (id)init;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)setCustomActionTitle:(id)a0;
- (void)setCustomTitle:(id)a0;
- (void)setCustomMessage:(id)a0;
- (void)_handleInAppMessage:(id)a0;
- (void)currentInAppMessageDidChange:(id)a0;

@end
