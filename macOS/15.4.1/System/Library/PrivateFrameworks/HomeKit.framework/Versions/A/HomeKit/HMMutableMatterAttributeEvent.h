@class HMAccessory, NSNumber;
@protocol NSCopying;

@interface HMMutableMatterAttributeEvent : HMMatterAttributeEvent

@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) NSNumber *attributeID;
@property (retain, nonatomic) NSNumber *clusterID;
@property (retain, nonatomic) NSNumber *endpointID;
@property (copy, nonatomic) id<NSCopying> triggerValue;

@end
