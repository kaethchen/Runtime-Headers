@interface QCDatagramReceiver : QCDatagramSocket

- (id)initWithAddress:(unsigned int)a0 port:(unsigned short)a1;
- (id)receiveDataWithTimeOut:(double)a0;
- (id)receiveStringWithTimeOut:(double)a0;

@end
