@class NSSet;

@interface HDPendingNotificationInstructions : NSObject <NSCopying>

@property (readonly, nonatomic) long long action;
@property (readonly, copy, nonatomic) NSSet *instructions;
@property (readonly, copy, nonatomic) NSSet *messageIdentifiers;
@property (readonly, copy, nonatomic) NSSet *categoryIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAction:(long long)a0 instructions:(id)a1;

@end
