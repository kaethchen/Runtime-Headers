@class IOKMatchingNotification, NSMutableSet, NSString;

@interface _TSF_TSDIOKServiceMatcher : NSObject {
    IOKMatchingNotification *_matchNotification;
    IOKMatchingNotification *_terminateNotification;
    NSMutableSet *_matchedEntryIDs;
    NSString *_identifier;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)getMatchedCount;
- (void)serviceMatched:(id)a0;
- (void)handleServiceMatched:(id)a0;
- (void)handleServiceTerminated:(id)a0;
- (void)serviceTerminated:(id)a0;
- (BOOL)startNotificationsWithMatchingDictionary:(id)a0;

@end
