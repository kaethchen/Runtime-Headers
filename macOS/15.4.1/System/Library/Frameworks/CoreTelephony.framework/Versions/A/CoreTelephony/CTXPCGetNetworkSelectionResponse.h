@class CTNetwork;

@interface CTXPCGetNetworkSelectionResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTNetwork *network;

+ (id)allowedClassesForArguments;

- (id)initWithNetwork:(id)a0;

@end
