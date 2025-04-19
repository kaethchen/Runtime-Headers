@class CTSignalStrengthInfo;

@interface CTXPCGetSignalStrengthInfoResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTSignalStrengthInfo *signalInfo;

+ (id)allowedClassesForArguments;

- (id)initWithSignalStrengthInfo:(id)a0;

@end
