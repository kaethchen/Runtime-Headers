@class PLPhotoLibraryIdentifier, PHPhotoLibraryIdentifier, PLCPLSettings, NSString;

@interface PHPhotoLibraryAttributes : NSObject

@property (readonly) PLPhotoLibraryIdentifier *pl_libraryIdentifier;
@property (readonly) PLCPLSettings *cplSettings;
@property (readonly) PHPhotoLibraryIdentifier *identifier;
@property (readonly) NSString *name;
@property (readonly) NSString *userDescription;
@property (readonly, getter=isCloudSyncEnabled) BOOL cloudSyncEnabled;
@property (readonly) unsigned short cloudResourcePrefetchMode;

- (void).cxx_destruct;
- (id)initWithLibraryIdentifier:(id)a0 cplSettings:(id)a1;

@end
