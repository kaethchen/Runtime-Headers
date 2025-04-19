@class NSString, NSURLSessionTask, NSObject;
@protocol OS_nw_activity;

@interface GEORequestCounterTicketBase : NSObject <GEORequestCounterTicket> {
    struct { int type; union { int raw; int tile; int placeRequest; } subtype; } _type;
    BOOL _logNetworkActivityOnly;
    unsigned char _result;
    double _start;
    double _end;
    long long _subTaskXmitBytes;
    long long _subTaskRecvBytes;
    unsigned long long _subTaskUsedInterfaces;
    GEORequestCounterTicketBase *_parentTask;
    unsigned char _subTaskResult;
    unsigned char _subtasks;
    NSURLSessionTask *_task;
    NSObject<OS_nw_activity> *_nwActivity;
    BOOL _nwActivityCompleted;
    unsigned long long _signpostId;
    unsigned long long _explicitInterfaces;
}

@property (readonly, nonatomic) NSString *appId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_requestCounterTicketForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 appId:(id)a1 traits:(id)a2 withParent:(id)a3 logNetworkActivityOnly:(BOOL)a4;
+ (id)requestCounterTicketForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 auditToken:(id)a1 traits:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_incrementForApp:(id)a0 startTime:(id)a1 endTime:(id)a2 requestType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a3 result:(unsigned char)a4 error:(id)a5 xmitBytes:(long long)a6 recvBytes:(long long)a7 usedInterfaces:(unsigned long long)a8;
- (void)_requestCompletedWithError:(id)a0 xmitBytes:(long long)a1 recvBytes:(long long)a2;
- (void)_subTask:(id)a0 completed:(unsigned char)a1 error:(id)a2 started:(double)a3 finished:(double)a4 xmitBytes:(long long)a5 recvBytes:(long long)a6 usedInterfaces:(unsigned long long)a7;
- (id)createSubtask:(BOOL)a0;
- (void)explicitInterfaceRequestCompleted:(id)a0 xmitBytes:(unsigned long long)a1 recvBytes:(unsigned long long)a2;
- (void)requestCompleted:(id)a0;
- (void)startingRequestWithExplicitInterfaces:(unsigned long long)a0;
- (void)startingRequestWithTask:(id)a0;

@end
