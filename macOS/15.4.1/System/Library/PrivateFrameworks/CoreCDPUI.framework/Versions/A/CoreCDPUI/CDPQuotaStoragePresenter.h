@class _TtC9CoreCDPUI21QuotaStorageViewModel, CDPContext, QuotaStorageViewHandler, NSWindow;
@protocol CDPRemoteDeviceSecretValidatorProtocol, CDPQuotaScreenUIHandlerCapable;

@interface CDPQuotaStoragePresenter : NSObject {
    CDPContext *_cdpContext;
    NSWindow *_presentingWindow;
    id<CDPRemoteDeviceSecretValidatorProtocol> _validator;
    id<CDPQuotaScreenUIHandlerCapable> _uiHandler;
}

@property (readonly) QuotaStorageViewHandler *quotaStorageViewHandler;
@property (readonly) NSWindow *quotaStorageWindow;
@property (readonly) _TtC9CoreCDPUI21QuotaStorageViewModel *quotaStorageViewModel;

- (void).cxx_destruct;
- (void)cdpContext:(id)a0 showResetCompletedAlertWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 showResetFailedAlertWithUnderlyingError:(id)a1 completion:(id /* block */)a2;
- (id)_makeQuotaStorageViewHandlerWithPresentationSource:(unsigned long long)a0;
- (id)_makeRequestHelperWithExtraChecks:(BOOL)a0;
- (id)initWithContext:(id)a0 presentingWindow:(id)a1 validator:(id)a2 uiHandler:(id)a3;
- (void)presentQuotaStorageAppListViewWithExtraChecks:(BOOL)a0;

@end
