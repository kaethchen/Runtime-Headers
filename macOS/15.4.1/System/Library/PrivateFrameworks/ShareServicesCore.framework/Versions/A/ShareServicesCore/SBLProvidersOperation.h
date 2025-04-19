@class NSArray, SBLShareKitSession;

@interface SBLProvidersOperation : PXAsyncOperation

@property (retain) NSArray *providers;
@property (weak) SBLShareKitSession *session;

- (void).cxx_destruct;
- (id)initWithProviders:(id)a0 session:(id)a1;
- (long long)samplesPerUnit;

@end
