@interface NSPersistentCloudKitContainerSetupPhaseActivity : NSPersistentCloudKitContainerActivity {
    unsigned long long _phase;
}

- (id)createDictionaryRepresentation;
- (id)initWithPhase:(unsigned long long)a0 storeIdentifier:(id)a1;

@end
