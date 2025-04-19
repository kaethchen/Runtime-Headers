@class NSNumber;

@interface SLSessionOwner : NSObject

@property (nonatomic) unsigned int port;
@property (retain, nonatomic) NSNumber *auditSessionID;
@property (retain, nonatomic) NSNumber *sessionID;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)sessionOwnerBySettingLoginwindowConnection:(unsigned int)a0;
+ (id)sessionOwnerForNewSessionWithAuditSessionID:(id)a0;
+ (id)sessionOwnerForNewSessionWithAuditSessionID:(id)a0 launchData:(id)a1;
+ (id)sessionOwnerWithPort:(unsigned int)a0 auditSessionID:(int)a1 cgSessionID:(unsigned int)a2;
+ (id)sessionOwnerWithXPCSerialization:(id)a0;

- (void)dealloc;
- (id)createXPCSerializationAndInvalidate;
- (id)initWithPort:(unsigned int)a0 auditSessionID:(int)a1 cgSessionID:(unsigned int)a2;
- (id)initWithXPCSerialization:(id)a0;

@end
