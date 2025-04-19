@class NSString;

@interface PTAssetCinematicReader : PTAssetReader <PTAssetComponentReader>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)globals;
- (id)copyNextFrame;

@end
