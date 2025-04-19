@interface SFLManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) id setByIdentifier;

+ (id)sharedInstance;
+ (id)listIdentifiers;
+ (Class)classForListWithIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)_init;
- (id)favoriteVolumes;
- (id)favoriteServers;
- (id)recentDocuments;
- (id)favoriteItems;
- (id)iCloudItems;
- (id)launchdJobs;
- (id)listWithIdentifier:(id)a0;
- (id)loginItems;
- (id)projectItems;
- (id)recentApplications;
- (id)recentDocumentsForBundleIdentifier:(id)a0;
- (id)recentHosts;
- (id)recentServers;
- (id)serviceManagementLoginItems;
- (id)setWithIdentifier:(id)a0;
- (id)sharePoints;

@end
