@class ViewService, ViewHost, NSString;

@interface HostAndService : NSObject

@property ViewHost *viewHost;
@property ViewService *viewService;
@property (retain) NSString *remoteViewIdentifier;
@property (readonly) unsigned int keyFocusTheftID;

+ (void)determineKeyFocus:(id)a0 because:(const char *)a1;

- (void)dealloc;
- (id)description;
- (void)dropKeyboardEvent:(struct __CGEvent { } *)a0;
- (struct __CGEvent { } *)event:(id)a0 inCache:(struct Events { unsigned int x0; id x1; char *x2; } *)a1;
- (BOOL)event:(struct __CGEvent { } *)a0 isCloseEnoughTo:(struct __CGEvent { } *)a1;
- (BOOL)lostKeyFocus;
- (void)releaseKeyFocus:(const char *)a0;
- (void)stealKeyFocus:(const char *)a0 wantsAggressiveKeyboardFocusTheftCancellation:(BOOL)a1;
- (BOOL)stoleKeyFocus;

@end
