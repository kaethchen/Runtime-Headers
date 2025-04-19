@class MKMapItemDetailSelectionAccessoryPresentationStyle;

@interface MKSelectionAccessory : NSObject

@property (readonly, nonatomic, getter=_style) long long style;
@property (readonly, nonatomic, getter=_mapItemDetailPresentationStyle) MKMapItemDetailSelectionAccessoryPresentationStyle *mapItemDetailPresentationStyle;

+ (id)mapItemDetailWithPresentationStyle:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMapItemDetailPresentationStyle:(id)a0;
- (BOOL)isEqualToSelectionAccessory:(id)a0;

@end
