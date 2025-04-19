@class NSLock, NSMutableDictionary;

@interface MXSystemController : NSObject {
    int mClientPID;
    NSMutableDictionary *mNotificationsSubscribedTo;
    NSLock *mNotificationsSubscribedToLock;
}

+ (void)mxSystemControllerListAddInstance:(id)a0 isSidekick:(BOOL)a1;
+ (void)mxSystemControllerListBeginIteration;
+ (void)mxSystemControllerListEndIteration;
+ (void)notifyAll:(id)a0 payload:(id)a1 dontPostIfSuspended:(BOOL)a2;
+ (void)updateMXSystemControllerList;

- (void)dealloc;
- (id)info;
- (id)initWithPID:(int)a0;
- (int)copyAttributeForKey:(id)a0 withValueOut:(void *)a1;
- (int)setAttributeForKey:(id)a0 andValue:(const void *)a1;

@end
