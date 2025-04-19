@interface MCPriorityInvocation : MCQOSInvocation

@property unsigned char priority;

+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 object1:(id)a2 object2:(id)a3 priority:(unsigned char)a4;
+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 object:(id)a2 priority:(unsigned char)a3;
+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 priority:(unsigned char)a2;
+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 object1:(id)a2 object2:(id)a3 object3:(id)a4 priority:(unsigned char)a5;
+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 object1:(id)a2 object2:(id)a3 object3:(id)a4 object4:(id)a5 priority:(unsigned char)a6;

@end
