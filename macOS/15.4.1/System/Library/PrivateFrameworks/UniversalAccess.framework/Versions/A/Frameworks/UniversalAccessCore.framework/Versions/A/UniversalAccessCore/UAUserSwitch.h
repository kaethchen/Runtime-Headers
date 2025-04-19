@class NSString, NSUUID, NSDictionary;

@interface UAUserSwitch : NSObject <NSCopying>

@property (nonatomic) unsigned long long triggerType;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) unsigned long long action;
@property (copy, nonatomic) NSString *customName;
@property (nonatomic) BOOL customNameIsLocalized;
@property (retain, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) NSDictionary *propertyList;

+ (id)switchWithPropertyList:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTriggerType:(unsigned long long)a0 actionType:(unsigned long long)a1 action:(unsigned long long)a2 customName:(id)a3 customNameIsLocalized:(BOOL)a4 uuid:(id)a5;

@end
