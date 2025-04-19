@interface SKAServerBag : NSObject

+ (id)logger;
+ (double)statusValidityForOffGridPayload;
+ (BOOL)presenceEnabledByServer;
+ (BOOL)presenceEnabledByServerForServiceIdentifier:(id)a0;
+ (BOOL)statusEnabledByServerForStatusTypeIdentifier:(id)a0;

@end
