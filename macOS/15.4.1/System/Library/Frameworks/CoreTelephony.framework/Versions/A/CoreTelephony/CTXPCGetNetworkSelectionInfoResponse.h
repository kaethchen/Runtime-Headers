@class CTNetworkSelectionInfo;

@interface CTXPCGetNetworkSelectionInfoResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTNetworkSelectionInfo *info;

+ (id)allowedClassesForArguments;

- (id)initWithNetworkSelectionInfo:(id)a0;

@end
