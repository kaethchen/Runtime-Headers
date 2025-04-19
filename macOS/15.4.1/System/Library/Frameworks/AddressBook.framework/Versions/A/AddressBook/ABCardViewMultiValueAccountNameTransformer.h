@class NSString, ABCardViewPersonMapper;

@interface ABCardViewMultiValueAccountNameTransformer : NSObject <ABCardViewMultiValueTransformer>

@property (retain, nonatomic) ABCardViewPersonMapper *personMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
