@interface AXKClickAction : AXKBaseAction

@property (nonatomic) unsigned long long count;
@property (nonatomic) long long button;
@property (nonatomic) unsigned long long modifiers;

+ (id)actionWithClickCount:(unsigned long long)a0 button:(long long)a1 modifiers:(unsigned long long)a2;

- (BOOL)mainWithElementController:(id)a0;

@end
