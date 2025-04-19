@class NSString;

@interface _LTDAnalyticsAssetSnapshotProvider : NSObject <_LTDAnalyticsAssetSnapshotProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectAssetSnapshotWithCompletion:(id /* block */)a0;

@end
