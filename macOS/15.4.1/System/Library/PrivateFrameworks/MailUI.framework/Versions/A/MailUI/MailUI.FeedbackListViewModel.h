@interface MailUI.FeedbackListViewModel : NSObject <EMDiagnosticFilesProvider> {
    void /* unknown type, empty encoding */ messageProvider;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ _canDonate;
    void /* unknown type, empty encoding */ _diagnosticsHelper;
    void /* unknown type, empty encoding */ _diagnosticsHelperToken;
    void /* unknown type, empty encoding */ _selectedBucket;
    void /* unknown type, empty encoding */ _selectedMailboxes;
    void /* unknown type, empty encoding */ _cancellationHandler;
    void /* unknown type, empty encoding */ _daemonInterface;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (nonatomic, copy) id /* block */ _cancellationHandler;
@property (nonatomic, copy) id /* block */ cancellationHandler;

- (id)init;
- (void).cxx_destruct;
- (id)messageListItemsForDiagnosticsHelper:(id)a0;
- (id)initWithDaemonInterface:(id)a0 diagnosticsHelper:(id)a1 viewModelHelper:(id)a2;

@end
