@class NSViewController;

@interface MKMapItemDetailSelectionAccessoryPresentationStyle : NSObject

@property (class, readonly, nonatomic) MKMapItemDetailSelectionAccessoryPresentationStyle *callout;
@property (class, readonly, nonatomic) MKMapItemDetailSelectionAccessoryPresentationStyle *openInMaps;

@property (readonly, nonatomic, getter=_style) long long style;
@property (readonly, nonatomic, getter=_calloutStyle) long long calloutStyle;
@property (readonly, weak, nonatomic, getter=_presentationViewController) NSViewController *presentationViewController;

+ (id)automaticWithPresentationViewController:(id)a0;
+ (id)calloutWithCalloutStyle:(long long)a0;
+ (id)sheetPresentedFromViewController:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 calloutStyle:(long long)a1 presentationViewController:(id)a2;
- (BOOL)isEqualToMapItemDetailSelectionAccessoryPresentationStyle:(id)a0;

@end
