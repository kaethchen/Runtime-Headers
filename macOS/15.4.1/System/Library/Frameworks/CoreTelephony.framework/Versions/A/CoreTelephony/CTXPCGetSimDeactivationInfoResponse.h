@class CTSimDeactivationInfo;

@interface CTXPCGetSimDeactivationInfoResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTSimDeactivationInfo *info;

+ (id)allowedClassesForArguments;

- (id)initWithInfo:(id)a0;

@end
