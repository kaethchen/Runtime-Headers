@interface SiriNetwork.CommunicationProtocolAce : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ bufferedInputData;
    void /* unknown type, empty encoding */ bufferedProviderHeaderOutputData;
    void /* unknown type, empty encoding */ bufferedGeneralOutputData;
    void /* unknown type, empty encoding */ bufferedUncompressedData;
    void /* unknown type, empty encoding */ httpResponseHeader;
    void /* unknown type, empty encoding */ inputDecompressor;
    void /* unknown type, empty encoding */ outputCompressor;
    void /* unknown type, empty encoding */ aceHeaderTimerSource;
    void /* unknown type, empty encoding */ aceHeaderTimerFireCount;
    void /* unknown type, empty encoding */ outstandingBarriers;
    void /* unknown type, empty encoding */ currentBarrierIndex;
    void /* unknown type, empty encoding */ pingTimerSource;
    void /* unknown type, empty encoding */ currentPingIndex;
    void /* unknown type, empty encoding */ pingInfo;
    void /* unknown type, empty encoding */ sendPings;
    void /* unknown type, empty encoding */ lastInputData;
    void /* unknown type, empty encoding */ lastInputDataPointer;
    void /* unknown type, empty encoding */ lastInputLength;
    void /* unknown type, empty encoding */ inputLengthUnchangedCounter;
    void /* unknown type, empty encoding */ lastOutputDataPointer;
    void /* unknown type, empty encoding */ lastOutputLength;
    void /* unknown type, empty encoding */ outputLengthUnchangedCounter;
    void /* unknown type, empty encoding */ safetyNetBuffer;
}

@end
