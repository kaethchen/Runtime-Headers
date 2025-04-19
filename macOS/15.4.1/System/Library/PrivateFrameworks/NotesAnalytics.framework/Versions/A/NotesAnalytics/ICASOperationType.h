@interface ICASOperationType : NSObject <AADataType>

@property (readonly, nonatomic) long long operationType;

- (id)initWithOperationType:(long long)a0;
- (id)toJsonValueAndReturnError:(id *)a0;

@end
