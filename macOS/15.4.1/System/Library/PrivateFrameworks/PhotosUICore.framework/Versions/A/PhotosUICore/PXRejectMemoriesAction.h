@class NSDictionary;

@interface PXRejectMemoriesAction : PXMemoriesAction

@property (copy, nonatomic) NSDictionary *redoMemoryFeatures;
@property (copy, nonatomic) NSDictionary *redoUserFeedbacks;
@property (copy, nonatomic) NSDictionary *undoUserFeedbacks;
@property (copy, nonatomic) NSDictionary *redoPhotosGraphDataValues;
@property (copy, nonatomic) NSDictionary *undoPhotosGraphDataValues;
@property (nonatomic) unsigned long long featureType;
@property (nonatomic) unsigned long long rejectReason;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionSystemImageName;
- (id)localizedActionName;

@end
