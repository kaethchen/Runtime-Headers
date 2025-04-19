@class NSError;

@interface PXOperationStatus : NSObject <NSCopying>

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (readonly, nonatomic) NSError *error;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithState:(long long)a0 error:(id)a1;
- (id)initWithState:(long long)a0 progress:(double)a1 error:(id)a2;
- (id)operationStatusByMixingOperationStatus:(id)a0 withMixFactor:(double)a1;

@end
