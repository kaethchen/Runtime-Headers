@class NSString, BSServiceConnectionEndpoint, UNNotification;

@interface UNNotificationResponse : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *originIdentifier;
@property (readonly) BSServiceConnectionEndpoint *targetConnectionEndpoint;
@property (readonly) NSString *targetSceneIdentifier;
@property (readonly, copy) UNNotification *notification;
@property (readonly, copy) NSString *actionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)responseWithNotification:(id)a0 actionIdentifier:(id)a1;
+ (id)responseWithNotification:(id)a0 actionIdentifier:(id)a1 originIdentifier:(id)a2 targetConnectionEndpoint:(id)a3;
+ (id)responseWithNotification:(id)a0 actionIdentifier:(id)a1 originIdentifier:(id)a2 targetConnectionEndpoint:(id)a3 targetSceneIdentifier:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)_initWithNotification:(id)a0 actionIdentifier:(id)a1 originIdentifier:(id)a2 targetConnectionEndpoint:(id)a3 targetSceneIdentifier:(id)a4;
- (id)initWithNotification:(id)a0 actionIdentifier:(id)a1;

@end
