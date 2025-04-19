@class NSArray, NSDate;

@interface PMMPrediction : NSObject

@property (readonly, nonatomic) NSArray *predictedItems;
@property (readonly, nonatomic) NSDate *expirationDate;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPredictedItems:(id)a0 expirationDate:(id)a1;
- (BOOL)isEqualToPrediction:(id)a0;

@end
