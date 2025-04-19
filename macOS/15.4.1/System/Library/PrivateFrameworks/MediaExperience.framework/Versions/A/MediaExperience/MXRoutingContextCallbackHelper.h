@class NSString, NSDate;

@interface MXRoutingContextCallbackHelper : NSObject {
    id mFigRoutingContextToken;
    NSString *mRouteConfigUpdateID;
    void /* function */ *mCallback;
    void *mContext;
    NSDate *mCreationTime;
}

+ (id)_sharedLock;

- (void)dealloc;
- (BOOL)_didRouteChangeFinish:(struct __CFString { } *)a0;
- (void)_routeConfigUpdated:(id)a0;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { } *)a0 routeConfigUpdateID:(id)a1 callback:(void /* function */ *)a2 context:(void *)a3;

@end
