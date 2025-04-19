@class NSArray;

@interface EWSItemInfoResponseMessageType : EWSResponseMessageType

@property (copy, nonatomic) NSArray *Items;

+ (id)definition;

- (void).cxx_destruct;

@end
