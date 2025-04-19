@class NSTimer;

@interface HardcopyCableReplacement : NSObject {
    char *incomingDataBuffer;
    unsigned int incomingdataBufferSize;
    unsigned int incomingReadHead;
    unsigned int incomingWriteHead;
    BOOL transportIsOpen;
    id hcrpDelegate;
    unsigned char printerStatus;
    char *last1284ID;
    unsigned int idLen;
    unsigned int currentOffset;
    unsigned short transactionID;
    unsigned int pendingTransactionID;
    struct PDUQueueElement { char *x0; struct PDUQueueElement *x1; } *pduHead;
    struct PDUQueueElement { char *x0; struct PDUQueueElement *x1; } *pduTail;
    unsigned int numberOfRemoteCreditsGrantedSoFar;
    unsigned int numberOfRemoteCreditsSavedJustInCase;
    double waitTime;
    NSTimer *pduTimer;
    void /* function */ *eventListener;
    void *eventRefcon;
    char printer1284IDBuffer[8096];
}

@property (retain) id transport;

+ (id)stringForTokenFrom1284ID:(id)a0 token:(id)a1;
+ (id)hardcopyCableReplacement;
+ (id)hardcopyCableReplacementWith:(id)a0;
+ (id)manufacturerFrom1284ID:(id)a0;
+ (id)productFrom1284ID:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (int)softReset;
- (int)closeConnection;
- (char *)buildPDU:(int)a0 transaction:(unsigned short)a1 paramterLength:(unsigned short)a2 parameters:(char *)a3;
- (int)closeTransportConnection;
- (unsigned short)connectionMaximumTransferUnit;
- (void)decrementLocalCreditCount:(unsigned int)a0;
- (void)delayedRequestForCredits:(id)a0;
- (int)dequeueBytes:(char *)a0 length:(unsigned int)a1 deQueuedBytes:(unsigned long long *)a2;
- (char *)dequeuePDU;
- (int)enqueueBytes:(char *)a0 length:(unsigned int)a1;
- (int)enqueuePDU:(char *)a0;
- (void)flushDataQueue;
- (void)flushPDUQueue;
- (int)get1284ID:(char *)a0;
- (unsigned short)getNewValidTransactionID;
- (int)handleCatastrophicError:(id)a0;
- (void)handleCreditOutOfSync;
- (int)hardReset;
- (id)initWithTransport:(id)a0;
- (BOOL)mustEnqueuePDU;
- (unsigned int)nBytesInQueue;
- (unsigned int)numberOfRemoteCreditsGrantedSoFar;
- (int)openConnection;
- (int)openConnectionWith:(id)a0;
- (int)openTransportConnection;
- (void)pduSent:(char *)a0;
- (int)peek:(void *)a0 length:(unsigned long long)a1 numberOfReadBytes:(unsigned long long *)a2;
- (int)printerStatus:(char *)a0;
- (void)processIncomingCredits:(unsigned int)a0;
- (int)processNewData:(char *)a0 length:(unsigned int)a1;
- (int)processPDU:(int)a0 transaction:(unsigned short)a1 paramterLength:(unsigned short)a2 status:(int)a3 parameters:(char *)a4;
- (int)read:(void *)a0 length:(unsigned long long)a1 numberOfReadBytes:(unsigned long long *)a2;
- (unsigned int)readBufferSize;
- (int)receivePDU:(char *)a0;
- (unsigned int)removeAllPDUsOfType:(int)a0;
- (int)requestCredits;
- (int)returnsUnusedCredits;
- (int)sendPDU:(char *)a0;
- (int)setEventCallBack:(void /* function */ *)a0 refCon:(void *)a1;
- (int)setReadBufferSize:(unsigned int)a0;
- (int)setupAndValidateTransportConnection:(int)a0;
- (void)timerAction:(id)a0;
- (unsigned short)transportConnectionMaximumTransferUnit;
- (int)transportSendPDU:(char *)a0;
- (int)vendCreditsToClient:(unsigned int)a0;
- (int)write:(void *)a0 length:(unsigned long long)a1 numberOfWrittenBytes:(unsigned long long *)a2;
- (void)writeDataCompleted:(int)a0;
- (int)writeOnTransport:(void *)a0 length:(unsigned int)a1 blocking:(BOOL)a2 numberOfWrittenBytes:(unsigned long long *)a3;

@end
