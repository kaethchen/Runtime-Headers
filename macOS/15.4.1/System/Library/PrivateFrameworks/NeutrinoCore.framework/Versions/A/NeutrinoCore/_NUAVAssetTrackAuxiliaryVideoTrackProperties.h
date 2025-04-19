@class NSString;

@interface _NUAVAssetTrackAuxiliaryVideoTrackProperties : NSObject <NUAuxiliaryVideoTrackProperties>

@property (nonatomic) int trackID;
@property (nonatomic) struct { long long width; long long height; } size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
