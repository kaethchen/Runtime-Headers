@protocol HMDPersistentStore;

@interface HMDTimeBasedFlagsPersistentStore : NSObject <HMDTimeBasedFlagsStoring>

@property (readonly, weak, nonatomic) id<HMDPersistentStore> persistentStore;

- (void).cxx_destruct;
- (id)initWithPersistentStore:(id)a0;
- (void)archiveDictionary:(id)a0;
- (id)unarchive;
- (id)unarchiveLegacyEventFlags;

@end
