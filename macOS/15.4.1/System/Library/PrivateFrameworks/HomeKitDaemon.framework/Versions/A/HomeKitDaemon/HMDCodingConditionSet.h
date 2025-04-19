@class HMDManagedObjectCodingModel;

@interface HMDCodingConditionSet : NSObject <NSCopying> {
    HMDManagedObjectCodingModel *_model;
    unsigned long long _bitmask;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (void)addCondition:(id)a0;
- (id)initWithModel:(id)a0 conditions:(id)a1;
- (void)removeCondition:(id)a0;

@end
