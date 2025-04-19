@class NSArray;

@interface NSTrackingAreaReservedIVars : NSObject {
    BOOL *outstandingRolloverDelayCancelledPtr;
    NSArray *_pressureConfigurations;
}

- (void)dealloc;

@end
