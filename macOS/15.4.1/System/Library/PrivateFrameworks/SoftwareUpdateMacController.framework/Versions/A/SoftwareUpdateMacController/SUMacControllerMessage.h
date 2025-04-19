@interface SUMacControllerMessage : NSObject

+ (id)unpackCommandFromServerMessage:(id)a0;
+ (id)unpackCommandFromClientMessage:(id)a0;
+ (id)unpackOptionsFromClientMessage:(id)a0;
+ (id)createClientMessageWithName:(id)a0 sender:(id)a1 clientID:(id)a2 cookie:(id)a3 options:(id)a4;
+ (id)createSeverMessageWithName:(id)a0 sender:(id)a1 clientID:(id)a2 response:(id)a3 error:(id)a4;
+ (id)unpackClientIDFromClientMessage:(id)a0;
+ (id)unpackCookieFromClientMessage:(id)a0;
+ (id)unpackErrorFromServerMessage:(id)a0;
+ (id)unpackResponseFromServerMessage:(id)a0;

@end
