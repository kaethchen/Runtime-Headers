@class NSMutableDictionary;
@protocol RCPEventDeliveryService;

@interface RCPEventDeliveryServicePool : NSObject <RCPEventDeliveryServicePool>

@property (retain, nonatomic) NSMutableDictionary *deliveryServicesBySenderID;
@property (retain, nonatomic) NSMutableDictionary *deliveryServicesBySenderProperties;
@property (retain, nonatomic) id<RCPEventDeliveryService> fallbackDeliveryService;
@property (nonatomic) BOOL shouldIgnoreSenderProperties;

- (id)init;
- (void).cxx_destruct;
- (void)tearDown;
- (id)_findServiceForSenderProperties:(id)a0;
- (id)deliveryServiceForSenderProperties:(id)a0;
- (BOOL)prewarmForSenderProperties:(id)a0 withError:(id *)a1;

@end
