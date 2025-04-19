@interface NSPortCoder : NSCoder

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)portCoderWithReceivePort:(id)a0 sendPort:(id)a1 components:(id)a2;

- (id)connection;
- (BOOL)isByref;
- (id)_connection;
- (id)decodePortObject;
- (void)dispatch;
- (void)encodePortObject:(id)a0;
- (id)initWithReceivePort:(id)a0 sendPort:(id)a1 components:(id)a2;
- (BOOL)isBycopy;

@end
