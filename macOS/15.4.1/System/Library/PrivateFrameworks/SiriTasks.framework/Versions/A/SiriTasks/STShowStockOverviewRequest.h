@class NSString, NSNumber;

@interface STShowStockOverviewRequest : AFSiriRequest {
    NSString *_name;
    NSString *_symbol;
    NSString *_exchange;
    NSNumber *_price;
    NSNumber *_high;
    NSNumber *_low;
    NSNumber *_change;
    NSNumber *_changePercent;
    NSString *_chartData;
}

+ (BOOL)supportsSecureCoding;

- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)symbol;
- (id)low;
- (id)high;
- (id)createResponse;
- (id)change;
- (id)price;
- (id)changePercent;
- (id)chartData;
- (id)exchange;
- (id)_initWithName:(id)a0 symbol:(id)a1 exchange:(id)a2 price:(id)a3 high:(id)a4 low:(id)a5 change:(id)a6 changePercent:(id)a7 chartData:(id)a8;

@end
