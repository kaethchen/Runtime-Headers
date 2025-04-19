@class NSString, CDPContext;
@protocol CDPWebAccessStatusProvider, CDPStateUIProvider, CDPWebAccessStatusUpdater, CDPWalrusStatusProvider;

@interface CDPUIWebAccessStatusChangeModel : NSObject <CDPUIStatusChangeModel> {
    id<CDPWebAccessStatusProvider> _webAccessStatusProvider;
    id<CDPWebAccessStatusUpdater> _webAccessStatusUpdater;
    id<CDPWalrusStatusProvider> _walrusStatusProvider;
}

@property (readonly, nonatomic) unsigned long long targetStatus;
@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *messageText;
@property (readonly, nonatomic) NSString *primaryButtonText;
@property (readonly, nonatomic) NSString *cancelButtonText;
@property (readonly, nonatomic) CDPContext *cdpContext;
@property (retain, nonatomic) CDPContext *authenticatedContext;
@property (readonly, nonatomic) id<CDPStateUIProvider> uiProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_checkCurrentStatus:(id /* block */)a0;
- (void)_updateUnderlyingValue:(id /* block */)a0;
- (id)initWithTargetStatus:(unsigned long long)a0 statusProvider:(id)a1 statusUpdater:(id)a2 walrusStatusProvider:(id)a3;

@end
