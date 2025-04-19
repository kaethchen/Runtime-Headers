@interface _VZKeyEvent : NSObject

@property (readonly) long long type;
@property (readonly) unsigned short keyCode;

- (id)initWithEvent:(id)a0;
- (id)initWithType:(long long)a0 keyCode:(unsigned short)a1;

@end
