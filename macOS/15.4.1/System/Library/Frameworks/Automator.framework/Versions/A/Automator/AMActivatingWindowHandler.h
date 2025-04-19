@class NSArray;
@protocol AMActivatingWindowHandlerDelegate;

@interface AMActivatingWindowHandler : NSObject

@property (class, readonly, copy, nonatomic) NSArray *_windowActivationNotifications;

@property (nonatomic) BOOL _didActivateApplication;
@property (weak, nonatomic) id<AMActivatingWindowHandlerDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)_configureActivationWatching;
- (void)_handleWindowActivationNotification:(id)a0;

@end
