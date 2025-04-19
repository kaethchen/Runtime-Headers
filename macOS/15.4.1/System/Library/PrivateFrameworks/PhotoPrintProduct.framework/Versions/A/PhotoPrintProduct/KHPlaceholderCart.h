@class NSDecimalNumber, NSString;

@interface KHPlaceholderCart : NSObject <KHStoreCartProtocol>

@property (readonly, nonatomic) NSDecimalNumber *subtotal;
@property (readonly, nonatomic) NSString *formattedSubtotal;
@property (readonly, nonatomic) long long maxLineItemsPerOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
