@interface ICASStyleType : NSObject <AADataType>

@property (readonly, nonatomic) long long styleType;

- (id)initWithStyleType:(long long)a0;
- (id)toJsonValueAndReturnError:(id *)a0;

@end
