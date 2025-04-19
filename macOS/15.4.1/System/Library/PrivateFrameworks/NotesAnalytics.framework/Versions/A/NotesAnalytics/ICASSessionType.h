@interface ICASSessionType : NSObject <AADataType>

@property (readonly, nonatomic) long long sessionType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithSessionType:(long long)a0;

@end
