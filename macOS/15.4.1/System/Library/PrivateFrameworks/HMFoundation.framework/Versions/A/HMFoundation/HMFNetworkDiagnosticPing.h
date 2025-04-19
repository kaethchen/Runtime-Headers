@class HMFPromise, NSDate;

@interface HMFNetworkDiagnosticPing : HMFNetworkDiagnostic

@property (nonatomic) unsigned short identifier;
@property (nonatomic) unsigned short sequenceNumber;
@property (nonatomic) double runDuration;
@property (nonatomic) int sockHandle_ipv4;
@property (nonatomic) int sockHandle_ipv6;
@property (nonatomic) struct __CFSocket { } *socket_ipv4;
@property (nonatomic) struct __CFSocket { } *socket_ipv6;
@property (retain, nonatomic) NSDate *pingStartDate;
@property (retain, nonatomic) HMFPromise *readPromise;
@property (retain, nonatomic) HMFPromise *delayPromise;

- (id)run;
- (void).cxx_destruct;
- (void)stop;
- (id)shortDescription;
- (id)_configure;
- (void)_readDataFromSocket:(struct __CFSocket { } *)a0;
- (id)_sendData:(id)a0;
- (id)_sendData:(id)a0 address:(id)a1;
- (id)_sendPing:(id)a0;
- (id)addressIPV4;
- (id)addressIPV6;
- (id)delayFuture:(double)a0;
- (id)dumpReport;
- (id)initWithDevice:(id)a0 delegate:(id)a1 queue:(id)a2;
- (id)pingDelegate;
- (id)runWithDelay:(double)a0;
- (void)stopWithError:(id)a0;
- (id)workContext;

@end
