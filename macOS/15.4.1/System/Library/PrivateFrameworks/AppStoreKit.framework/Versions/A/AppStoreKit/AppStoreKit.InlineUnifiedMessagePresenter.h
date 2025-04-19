@interface AppStoreKit.InlineUnifiedMessagePresenter : NSObject <AMSUIMessageViewControllerDelegate, AMSEngagementObserver> {
    void /* unknown type, empty encoding */ actionHandler;
    void /* unknown type, empty encoding */ engagement;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ metricsPipeline;
    void /* unknown type, empty encoding */ onReceivedRequestToShowUnifiedMessage;
    void /* unknown type, empty encoding */ onReceivedRequestToHideUnifiedMessage;
    void /* unknown type, empty encoding */ inlineViewControllers;
}

- (id)init;
- (void).cxx_destruct;
- (void)engagement:(id)a0 didUpdateEngagementRequest:(id)a1 placement:(id)a2 serviceType:(id)a3 completion:(id /* block */)a4;
- (void)engagement:(id)a0 didUpdateRequest:(id)a1 placement:(id)a2 serviceType:(id)a3;
- (void)engagement:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)engagement:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;
- (void)messageViewController:(id)a0 didFailWithError:(id)a1;
- (void)messageViewController:(id)a0 didSelectActionWithDialogResult:(id)a1;
- (void)messageViewController:(id)a0 didUpdateSize:(struct CGSize { double x0; double x1; })a1;
- (void)messageViewController:(id)a0 enqueueEventWithFields:(id)a1 inTopic:(id)a2;

@end
