@interface NSViewBridgeObject : NSViewBridgeObjectBase

@property unsigned char owner;

- (id)description;
- (void)setObject:(id)a0;
- (id)initWithObject:(id)a0 owner:(unsigned char)a1;

@end
