@class NSDictionary, CMCaptureUserNotification, NSNumber, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface CMCaptureUserNotificationManager : NSObject {
    unsigned long long _flags;
    NSDictionary *_notificationDictionary;
    NSNumber *_response;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_responseGroup;
    CMCaptureUserNotification *_notification;
    unsigned long long _notificationCount;
}

@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) NSDictionary *notificationDictionary;
@property (retain, nonatomic) NSNumber *response;
@property (readonly, nonatomic) BOOL hasResponse;
@property (readonly, nonatomic) BOOL responseWasDefault;
@property (readonly, nonatomic) BOOL responseWasAlternate;
@property (readonly, nonatomic) BOOL responseWasOther;
@property (readonly, nonatomic) BOOL responseWasCancelled;

- (void)dealloc;
- (id)init;
- (id)showNotification;
- (id)waitForResponse;
- (unsigned long long)_beginNotification:(id)a0;
- (void)_endNotification;
- (void)asyncResponse:(id)a0 block:(id /* block */)a1;
- (id)cancelNotification;
- (void)setNotificationFlags:(unsigned long long)a0 andDictionary:(id)a1;
- (id)waitForResponseUntilTimeout:(double)a0;

@end
