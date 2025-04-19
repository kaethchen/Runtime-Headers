@class NSXPCConnection, NSString, NSURL, NSDictionary, NSUserNotificationCenter, NSObject, SDXPCServer, NSUserNotification;
@protocol OS_dispatch_queue;

@interface SFUserAlert : NSObject <NSUserNotificationCenterDelegate, NSSecureCoding, SFXPCInterface> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct __CFUserNotification { } *_cfNotif;
    NSUserNotification *_bannerNotification;
    NSUserNotificationCenter *_notificationCenter;
    NSXPCConnection *_xpcCnx;
    struct __CFRunLoopSource { } *_runLoopSrc;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SDXPCServer *server;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ responseHandler;
@property (copy, nonatomic) id /* block */ textResponseHandler;
@property (copy, nonatomic) id /* block */ dictionaryResponseHandler;
@property (retain, nonatomic) NSDictionary *additionalInfo;
@property (nonatomic) BOOL asBanner;
@property (retain, nonatomic) NSURL *iconURL;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSURL *soundURL;
@property (nonatomic) BOOL textInput;
@property (retain, nonatomic) NSString *textInputTitle;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL hasDefaultButton;
@property (retain, nonatomic) NSString *defaultButtonTitle;
@property (retain, nonatomic) NSString *alternateButtonTitle;
@property (retain, nonatomic) NSString *otherButtonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)userNotificationCenter:(id)a0 didActivateNotification:(id)a1;
- (void)present;
- (void)_invalidate;
- (void)_invalidated;
- (void)_postNotification:(struct __CFUserNotification { } *)a0;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (id)_defaultDictionary;
- (void)_handleResponseForNotification:(struct __CFUserNotification { } *)a0 flags:(unsigned long long)a1;
- (id)_mergedDict;
- (void)_present;
- (void)_presentBanner;
- (struct __CFUserNotification { } *)createNotification;
- (id)createNotificationBanner;
- (void)updateNotification;
- (void)userNotificationDictionaryResponse:(id)a0;
- (void)userNotificationError:(id)a0;
- (void)userNotificationResponse:(int)a0;
- (void)userNotificationTextResponse:(id)a0;

@end
