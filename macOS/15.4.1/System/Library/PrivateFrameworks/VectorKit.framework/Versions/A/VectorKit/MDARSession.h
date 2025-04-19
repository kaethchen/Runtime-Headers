@interface MDARSession : NSObject

@property (class, readonly) BOOL isSupported;

+ (id)newGeoTrackingSession;
+ (id)newPositionalTrackingSession;

@end
