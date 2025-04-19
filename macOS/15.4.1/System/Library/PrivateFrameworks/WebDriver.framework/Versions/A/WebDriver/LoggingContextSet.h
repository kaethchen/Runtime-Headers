@class NSMutableSet;

@interface LoggingContextSet : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    NSMutableSet *set;
}

- (id)init;
- (void).cxx_destruct;
- (void)addToSet:(int)a0;
- (id)currentSet;
- (BOOL)isInSet:(int)a0;
- (void)removeFromSet:(int)a0;

@end
