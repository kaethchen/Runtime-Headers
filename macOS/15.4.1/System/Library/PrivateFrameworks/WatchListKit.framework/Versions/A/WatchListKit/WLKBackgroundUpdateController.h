@interface WLKBackgroundUpdateController : NSObject {
    int _notifyToken;
    BOOL _notifyTokenIsValid;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)_init;

@end
