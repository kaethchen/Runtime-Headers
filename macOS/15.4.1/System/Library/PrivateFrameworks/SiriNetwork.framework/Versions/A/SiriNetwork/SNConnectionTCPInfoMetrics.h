@class NSString, NSNumber;

@interface SNConnectionTCPInfoMetrics : NSObject

@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (readonly, copy, nonatomic) NSNumber *rttCurrent;
@property (readonly, copy, nonatomic) NSNumber *rttSmoothed;
@property (readonly, copy, nonatomic) NSNumber *rttVariance;
@property (readonly, copy, nonatomic) NSNumber *rttBest;
@property (readonly, copy, nonatomic) NSNumber *packetsSent;
@property (readonly, copy, nonatomic) NSNumber *packetsReceived;
@property (readonly, copy, nonatomic) NSNumber *bytesSent;
@property (readonly, copy, nonatomic) NSNumber *bytesReceived;
@property (readonly, copy, nonatomic) NSNumber *bytesRetransmitted;
@property (readonly, copy, nonatomic) NSNumber *bytesUnacked;
@property (readonly, copy, nonatomic) NSNumber *duplicateBytesReceived;
@property (readonly, copy, nonatomic) NSNumber *outOfOrderBytesReceived;
@property (readonly, copy, nonatomic) NSNumber *sendBufferBytes;
@property (readonly, copy, nonatomic) NSNumber *sendBandwidth;
@property (readonly, copy, nonatomic) NSNumber *synRetransmits;
@property (readonly, copy, nonatomic) NSNumber *tfoSynDataAcked;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithInterfaceName:(id)a0 rttCurrent:(id)a1 rttSmoothed:(id)a2 rttVariance:(id)a3 rttBest:(id)a4 packetsSent:(id)a5 packetsReceived:(id)a6 bytesSent:(id)a7 bytesReceived:(id)a8 bytesRetransmitted:(id)a9 bytesUnacked:(id)a10 duplicateBytesReceived:(id)a11 outOfOrderBytesReceived:(id)a12 sendBufferBytes:(id)a13 sendBandwidth:(id)a14 synRetransmits:(id)a15 tfoSynDataAcked:(id)a16;

@end
