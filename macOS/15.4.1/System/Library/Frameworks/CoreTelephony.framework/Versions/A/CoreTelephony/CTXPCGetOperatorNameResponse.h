@class NSString;

@interface CTXPCGetOperatorNameResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSString *operatorName;

- (id)initWithOperatorName:(id)a0;

@end
