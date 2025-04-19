@class HDProfile;

@interface HDCloudSyncContextSyncManager : NSObject {
    HDProfile *_profile;
}

- (void).cxx_destruct;
- (id)push:(id /* block */)a0;
- (id)initWithProfile:(id)a0;
- (id)pull:(id /* block */)a0;

@end
