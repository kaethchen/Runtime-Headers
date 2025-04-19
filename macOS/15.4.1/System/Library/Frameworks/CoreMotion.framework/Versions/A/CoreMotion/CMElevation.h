@interface CMElevation : NSObject

+ (BOOL)isElevationAvailable;

- (void)startElevationUpdatesWithHandler:(id /* block */)a0;
- (void)stopElevationUpdates;

@end
