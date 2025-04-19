@class NSString, NSNumber;

@interface PLPhotoLibraryAttributesChanges : NSObject <PLChangesForServiceHandling>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *userDescription;
@property (retain) NSNumber *enableCloudSyncValue;
@property (retain) NSNumber *cloudResourcePrefetchModeValue;
@property (readonly) BOOL hasChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
