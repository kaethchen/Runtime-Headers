@interface VCAggregatorHomeKitVideo : VCAggregatorVideoStream {
    BOOL _connectionType;
}

- (void)reset;
- (id)dispatchedAggregatedSessionReport;
- (void)dispatchedProcessEventWithCategory:(unsigned short)a0 type:(unsigned short)a1 payload:(id)a2;
- (unsigned short)messageTypeForSegmentReportWithDirection:(int)a0;

@end
