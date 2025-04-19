@class GEORequestCounterPersistence;

@interface _GEOLocalRequestCounterTicket : GEORequestCounterTicketBase {
    GEORequestCounterPersistence *_persistence;
}

+ (id)requestCounterTicketForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 auditToken:(id)a1 traits:(id)a2 persistence:(id)a3;

- (void).cxx_destruct;
- (void)_incrementForApp:(id)a0 startTime:(id)a1 endTime:(id)a2 requestType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a3 result:(unsigned char)a4 error:(id)a5 xmitBytes:(long long)a6 recvBytes:(long long)a7 usedInterfaces:(unsigned long long)a8;

@end
