@class NSError, TUCall, TUJoinConversationRequest, _TtC24FaceTimeNotificationCore18AlertConfiguration, _TtC24FaceTimeNotificationCore22WrappedAlertIdentifier, _TtC24FaceTimeNotificationCore6Notice, TUDialRequest, _TtC24FaceTimeNotificationCore14UpstreamAction;

@interface FaceTimeNotificationCore.NotificationServiceClient : NSObject <FaceTimeNotificationCore.FaceTimeNotificationServiceProtocol> {
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ sourceConnection;
    void /* unknown type, empty encoding */ onReceiveAction;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ connectionTask;
    void /* unknown type, empty encoding */ assertion;
    void /* unknown type, empty encoding */ presentedAlertIdentifiers;
}

- (id)init;
- (void).cxx_destruct;
- (void)alertExistsWithId:(_TtC24FaceTimeNotificationCore22WrappedAlertIdentifier *)a0 completionHandler:(void (^)(BOOL))a1;
- (void)dismissAlertWithIdentifier:(_TtC24FaceTimeNotificationCore22WrappedAlertIdentifier *)a0 animated:(BOOL)a1 completionHandler:(void (^)(NSError *))a2;
- (void)frameWithIdentifier:(_TtC24FaceTimeNotificationCore22WrappedAlertIdentifier *)a0 completionHandler:(void (^)(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; }, NSError *))a1;
- (void)sendAction:(_TtC24FaceTimeNotificationCore14UpstreamAction *)a0 to:(_TtC24FaceTimeNotificationCore22WrappedAlertIdentifier *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)showCallWithCall:(TUCall *)a0 in:(_TtC24FaceTimeNotificationCore22WrappedAlertIdentifier *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)showDialPromptWithDialRequest:(TUDialRequest *)a0 in:(_TtC24FaceTimeNotificationCore22WrappedAlertIdentifier *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)showDialPromptWithJoinRequest:(TUJoinConversationRequest *)a0 in:(_TtC24FaceTimeNotificationCore22WrappedAlertIdentifier *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)showNotice:(_TtC24FaceTimeNotificationCore6Notice *)a0 in:(_TtC24FaceTimeNotificationCore22WrappedAlertIdentifier *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)showTestAlertWithConfiguration:(_TtC24FaceTimeNotificationCore18AlertConfiguration *)a0 completionHandler:(void (^)(NSError *))a1;

@end
