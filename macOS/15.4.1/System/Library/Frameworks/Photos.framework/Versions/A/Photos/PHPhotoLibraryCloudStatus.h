@class CPLStatus, NSDate;

@interface PHPhotoLibraryCloudStatus : NSObject {
    CPLStatus *_cplStatus;
}

@property (readonly, getter=isCloudSyncEnabled) BOOL cloudSyncEnabled;
@property (readonly) NSDate *lastSyncDate;
@property (readonly) NSDate *firstSyncDate;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)cplStatus;
- (id)initWithCPLStatus:(id)a0;

@end
