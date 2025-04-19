@protocol NSObject;

@interface SGCuratedChangeNotificationsCalendarListener : SGCuratedChangeNotificationsBaseListener {
    id<NSObject> _notificationCenterToken;
}

- (void).cxx_destruct;
- (void)startListening;
- (void)stopListening;

@end
