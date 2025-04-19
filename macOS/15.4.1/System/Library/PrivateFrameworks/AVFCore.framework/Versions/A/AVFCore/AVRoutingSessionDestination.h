@class NSArray, AVRoutingSessionDestinationInternal;

@interface AVRoutingSessionDestination : NSObject {
    AVRoutingSessionDestinationInternal *_ivars;
}

@property (readonly, nonatomic) NSArray *outputDeviceDescriptions;
@property (readonly, nonatomic) float probability;
@property (readonly, nonatomic) BOOL providesExternalVideoPlayback;

- (void)dealloc;

@end
