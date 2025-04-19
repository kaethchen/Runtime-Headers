@class NSString, NSMutableSet;

@interface PLUtilityAsset : NSObject <PNUtilityAsset>

@property (nonatomic) long long sceneAnalysisVersion;
@property (retain, nonatomic) NSMutableSet *sceneClassifications;
@property (nonatomic) BOOL isAIImageFromGenerativePlayground;
@property (nonatomic) BOOL hasQRCodeData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)utilityAssetFromManagedAsset:(id)a0 usingPool:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_prepareForRecycle;

@end
