@class NSArray, NSString;
@protocol ABCardViewMultiValueConverter;

@interface ABCardViewTransformingMultiValueConverter : NSObject <ABCardViewMultiValueConverter>

@property (retain, nonatomic) id<ABCardViewMultiValueConverter> basicConverter;
@property (retain, nonatomic) NSArray *multiValueTransformers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)multiValueFromValue:(id)a0;
- (id)valueFromMultiValue:(id)a0;

@end
