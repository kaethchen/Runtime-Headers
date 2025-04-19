@class AXFDispatchQueue, NSString, NSMutableDictionary, SCRCWeakReferenceContainer, SCRSharedFocusJumpingInfo;

@interface SCROutputSharedFocusManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *_notificationsForOutput;
@property (retain, nonatomic) AXFDispatchQueue *_sharedFocusManagerDispatchQueue;
@property (nonatomic, setter=_setNotificationsAreQueuedForOutput:) BOOL _notificationsAreQueuedForOutput;
@property (copy, nonatomic, setter=_setPreviousSelectionChangeOutput:) NSString *_previousSelectionChangeOutput;
@property (nonatomic) BOOL _didSendBrailleTextLine;
@property (retain, nonatomic) SCRCWeakReferenceContainer *_application;
@property (retain, nonatomic) SCRSharedFocusJumpingInfo *jumpingInfo;

- (void).cxx_destruct;
- (id)application;
- (id)initWithApplication:(id)a0;
- (id)_addAdditionalOutputToRequest:(id)a0 forNotificationKey:(long long)a1;
- (id)_descriptionForNotificationType:(long long)a0;
- (void)_flushSharedFocusQueue;
- (BOOL)_hasNewOutput:(id)a0 comparedToCachedOutput:(id)a1;
- (void)_outputSharedFocusNotificationQueue;
- (id)_removeDuplicateOutputToRequest:(id)a0 forNotificationKey:(long long)a1;
- (void)_scheduleOutputForSharedFocusQueue;
- (BOOL)addOutputRequestToSharedFocusQueue:(id)a0 withNotificationKey:(long long)a1;
- (void)didSendBrailleTextLine;
- (id)sharedFocusQueueDescription;

@end
