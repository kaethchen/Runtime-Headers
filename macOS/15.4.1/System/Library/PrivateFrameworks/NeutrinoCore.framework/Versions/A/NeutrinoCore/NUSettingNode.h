@class NUSetting;

@interface NUSettingNode : NUControlNode

@property (readonly, nonatomic) NUSetting *setting;

- (id)valueForKey:(id)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)childNodeAtIndex:(unsigned long long)a0;
- (id)initWithSetting:(id)a0;
- (id)childNodeForKey:(id)a0;
- (id)initWithSetting:(id)a0 value:(id)a1;

@end
