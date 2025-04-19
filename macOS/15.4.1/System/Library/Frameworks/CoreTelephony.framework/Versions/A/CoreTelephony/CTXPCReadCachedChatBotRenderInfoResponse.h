@class CTLazuliChatBotRenderInformationData;

@interface CTXPCReadCachedChatBotRenderInfoResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTLazuliChatBotRenderInformationData *info;

+ (id)allowedClassesForArguments;

- (id)initWithInfo:(id)a0;

@end
