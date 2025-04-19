@class NSString, HKDevice;

@interface _HDAggregationStateKey : NSObject <NSCopying> {
    NSString *_collectorIdentifier;
    HKDevice *_device;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
