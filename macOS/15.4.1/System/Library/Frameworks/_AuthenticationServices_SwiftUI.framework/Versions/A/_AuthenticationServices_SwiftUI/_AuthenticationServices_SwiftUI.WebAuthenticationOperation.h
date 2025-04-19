@interface _AuthenticationServices_SwiftUI.WebAuthenticationOperation : NSOperation {
    void /* unknown type, empty encoding */ authenticationCompletionHandler;
    void /* unknown type, empty encoding */ presentationAnchorProvider;
    void /* unknown type, empty encoding */ requestContext;
    void /* unknown type, empty encoding */ stateStorage;
    void /* unknown type, empty encoding */ authenticationSession;
    void /* unknown type, empty encoding */ presentationContextProvider;
}

@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic, readonly) BOOL executing;
@property (nonatomic, readonly) BOOL finished;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;

@end
