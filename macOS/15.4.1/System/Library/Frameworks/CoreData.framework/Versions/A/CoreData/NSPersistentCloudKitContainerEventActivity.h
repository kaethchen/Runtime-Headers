@class NSMutableDictionary;

@interface NSPersistentCloudKitContainerEventActivity : NSPersistentCloudKitContainerActivity {
    NSMutableDictionary *_activitiesByPhaseNum;
    long long _eventType;
}

- (void)dealloc;
- (id)beginActivityForPhase:(unsigned long long)a0;
- (id)createDictionaryRepresentation;
- (id)endActivityForPhase:(unsigned long long)a0 withError:(id)a1;

@end
