@interface QCDatagramBroadcaster : QCDatagramSocket

- (id)initWithAddress:(unsigned int)a0 port:(unsigned short)a1;
- (BOOL)sendData:(id)a0;
- (BOOL)sendString:(id)a0;

@end
