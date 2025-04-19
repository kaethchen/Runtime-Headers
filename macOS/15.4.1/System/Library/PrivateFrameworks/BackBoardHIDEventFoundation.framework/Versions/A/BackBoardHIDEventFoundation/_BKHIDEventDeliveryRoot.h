@class NSString, NSArray, NSDictionary;

@interface _BKHIDEventDeliveryRoot : NSObject {
    NSString *_identifier;
    NSArray *_dispatchingRules;
    NSArray *_bufferingDispatchRules;
    NSDictionary *_deliveryChainByIdentity;
    NSArray *_resolutionPaths;
    unsigned long long _dispatchingEventTypeMask;
}

- (id)description;
- (void).cxx_destruct;

@end
