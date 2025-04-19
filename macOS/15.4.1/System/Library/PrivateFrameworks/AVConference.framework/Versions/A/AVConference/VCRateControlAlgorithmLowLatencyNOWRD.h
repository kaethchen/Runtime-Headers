@interface VCRateControlAlgorithmLowLatencyNOWRD : VCRateControlAlgorithmBase {
    BOOL _isStable;
    unsigned short _echoedTimestamp;
    unsigned int _maxBurstyLoss;
    unsigned int _actualSendBitrate;
    unsigned int _instantBitrate;
    unsigned int _nwConnectionAvgThroughput;
    double _nwConnectionAvgDelay;
    unsigned int _nwConnectionOverDelayThresholdCount;
    unsigned int _nwConnectionMaxThroughput;
    int _nwConnectionRateTrendSuggestion;
    BOOL _shouldBlockRampUpForNWConnection;
    unsigned int _nwConnectionPacketLossPerFrame;
    unsigned short _previousTimestamp;
    unsigned short _queuingDelayTimestamp;
    unsigned int _receiveTimestamp;
    unsigned int _timestampWrapAroundCounter;
    unsigned int _newOWRDSampleCollected;
    double _previousNOWRD;
    double _sendBitrateLimitedStartTime;
    double _sendBitrateStartTime;
    double _lastSendDataTime;
    double _lastRampDownTime;
    double _lastPositiveOWRDTime;
    BOOL _isRampUpSettling;
    unsigned int _fastRampDownBitrateRange;
    double _rampUpSettleDuration;
    double _rateChangeSystemTime;
}

- (id)init;
- (BOOL)setUpVTable;

@end
