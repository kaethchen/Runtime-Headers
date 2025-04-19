@class CTEncryptionStatusInfo;

@interface CTXPCGetEncryptionStatusResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTEncryptionStatusInfo *info;

+ (id)allowedClassesForArguments;

- (id)initWithEncryptionStatusInfo:(id)a0;

@end
