@class NSString, PLPhotoLibraryPathManager, NSDate;

@interface PLCameraPreviewWellAssetInfo : NSObject

@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) double sortToken;
@property (readonly, nonatomic) NSDate *addedDate;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) short visibilityState;
@property (readonly, nonatomic) short trashedState;
@property (readonly, nonatomic) int avalanchePickType;
@property (readonly, nonatomic) short savedAssetType;
@property (readonly, nonatomic) NSString *thumbnailIdentifier;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 sortToken:(double)a1 addedDate:(id)a2 hidden:(BOOL)a3 visibilityState:(short)a4 trashedState:(short)a5 avalanchePickType:(int)a6 savedAssetType:(short)a7 thumbnailIdentifier:(id)a8 pathManager:(id)a9;

@end
