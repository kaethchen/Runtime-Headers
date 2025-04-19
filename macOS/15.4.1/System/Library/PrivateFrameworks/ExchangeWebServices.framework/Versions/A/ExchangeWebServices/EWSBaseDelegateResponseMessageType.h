@class NSArray;

@interface EWSBaseDelegateResponseMessageType : EWSResponseMessageType

@property (copy, nonatomic) NSArray *ResponseMessages;

+ (id)definition;

- (void).cxx_destruct;

@end
