@class NSString, NSDictionary, ICStoreRequestContext, ICPushNotificationsResponse;

@interface ICPushNotificationsEnableTypesRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    NSString *_notificationType;
    NSDictionary *_notificationParams;
    ICPushNotificationsResponse *_response;
}

- (void).cxx_destruct;
- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (id)initWithRequestContext:(id)a0 notificationType:(id)a1 notificationParameters:(id)a2;

@end
