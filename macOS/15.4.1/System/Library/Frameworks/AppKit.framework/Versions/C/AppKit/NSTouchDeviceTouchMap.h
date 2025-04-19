@class NSMutableSet, NSMutableDictionary;

@interface NSTouchDeviceTouchMap : NSObject {
    NSMutableDictionary *_touchesToGestureRecognizersMap;
}

@property (retain) NSMutableSet *touches;
@property (retain) NSMutableSet *cancelledTouches;
@property (retain) NSMutableDictionary *cachedBeginTouches;
@property (retain) NSMutableSet *claimedTouchIdentities;
@property (retain) NSMutableSet *commandeeredTouchIdentities;
@property (retain) NSMutableSet *activeGestureRecognizers;
@property long long flushCount;

- (void)dealloc;
- (id)init;
- (void)preventFlushing;
- (void)allowFlushing;
- (id)gestureRecognizersForKey:(id)a0;
- (void)removeGestureRecognizerFromAllKeys:(id)a0;
- (id)touchIdentitiesAssociatedWithGestureRecognizer:(id)a0;
- (void)updateActiveGestureRecognizers;

@end
