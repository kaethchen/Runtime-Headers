@class NSString;

@interface OFRescalerItem : NSObject <OFRescalerItem>

@property double defaultDuration;
@property double minimumDuration;
@property double maximumDuration;
@property double compressibility;
@property double expandability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)incompressibleItemWithDuration:(double)a0;
+ (id)greaterFlexibleItemWithDefaultDuration:(double)a0 minimumDuration:(double)a1 maximumDuration:(double)a2;
+ (id)lesserFlexibleItemWithDefaultDuration:(double)a0 minimumDuration:(double)a1 maximumDuration:(double)a2;
+ (id)normalItemWithDefaultDuration:(double)a0 minimumDuration:(double)a1 maximumDuration:(double)a2;


@end
