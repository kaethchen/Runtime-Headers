@class NSString;

@interface HDPendingNotificationInstruction : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *messageIdentifier;
@property (readonly, copy, nonatomic) NSString *categoryIdentifier;
@property (readonly, copy, nonatomic) NSString *sendingDeviceName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessageIdentifier:(id)a0 categoryIdentifier:(id)a1 sendingDeviceName:(id)a2;

@end
