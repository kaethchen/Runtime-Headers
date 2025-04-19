@class NSMutableArray;
@protocol UINSHidSettings;

@interface UINSHidManager : NSObject <UINSHidManager> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *queuedEvents;
@property (copy, nonatomic) id /* block */ pingHandler;
@property (readonly, nonatomic) id<UINSHidSettings> settings;
@property (readonly) BOOL forceClickPerformsQuickLook;
@property (readonly) double doubleClickInterval;

+ (id)sharedHidManager;

- (id)init;
- (void).cxx_destruct;
- (void)enqueueHidEvent:(struct __IOHIDEvent { } *)a0 forSceneView:(id)a1;
- (struct __IOHIDEvent { } *)pullNextEventFromQueue;
- (void)registerEventPingHandler:(id /* block */)a0;

@end
