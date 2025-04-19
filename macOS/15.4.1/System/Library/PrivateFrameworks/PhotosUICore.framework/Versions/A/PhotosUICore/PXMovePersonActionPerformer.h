@class NSArray, NSString;

@interface PXMovePersonActionPerformer : PXAssetCollectionActionPerformer <PXPhotoKitPersonActionPerformer> {
    void /* unknown type, empty encoding */ sourcePeople;
    void /* unknown type, empty encoding */ targetLocalIdentifier;
}

@property (nonatomic, copy) NSArray *sourcePeople;
@property (nonatomic) void /* unknown type, empty encoding */ destinationManualOrder;
@property (nonatomic) void /* unknown type, empty encoding */ destinationType;
@property (nonatomic, copy) NSString *targetLocalIdentifier;

+ (BOOL)canPerformOn:(id)a0;
+ (id)localizedTitleForPerson:(id)a0;
+ (id)systemImageNameForPerson:(id)a0;

- (void).cxx_destruct;
- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 displayTitleInfo:(id)a2;
- (void)performBackgroundTask;

@end
