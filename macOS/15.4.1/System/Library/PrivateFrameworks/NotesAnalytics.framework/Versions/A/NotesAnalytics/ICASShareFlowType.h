@interface ICASShareFlowType : NSObject <AADataType>

@property (readonly, nonatomic) long long shareFlowType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithShareFlowType:(long long)a0;

@end
