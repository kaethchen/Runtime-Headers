@class NSDictionary;

@interface UAHIDUserSwitch : UAUserSwitch

@property (copy, nonatomic) NSDictionary *hidDictionary;

- (void).cxx_destruct;
- (id)propertyList;
- (id)initWithHIDDictionary:(id)a0 actionType:(unsigned long long)a1 action:(unsigned long long)a2 customName:(id)a3 customNameIsLocalized:(BOOL)a4 uuid:(id)a5;
- (id)initWithTriggerType:(unsigned long long)a0 actionType:(unsigned long long)a1 action:(unsigned long long)a2 customName:(id)a3 customNameIsLocalized:(BOOL)a4 uuid:(id)a5;

@end
