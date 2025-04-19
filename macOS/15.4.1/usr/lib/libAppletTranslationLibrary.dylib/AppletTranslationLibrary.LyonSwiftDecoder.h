@interface AppletTranslationLibrary.LyonSwiftDecoder : NSObject <ATLDecoder, ATLStatefulDecoder> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ endpointIdentifier;
    void /* unknown type, empty encoding */ readerIdentifier;
    void /* unknown type, empty encoding */ sw;
    void /* unknown type, empty encoding */ endpointNotFoundReason;
    void /* unknown type, empty encoding */ antiRelayResult;
    void /* unknown type, empty encoding */ requestAuth;
    void /* unknown type, empty encoding */ protocolVersion;
}

@property (nonatomic, readonly) long long stateNumber;

+ (id)getInstance;

- (id)init;
- (void).cxx_destruct;
- (void)cleanup;
- (id)GetAppletProperties:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
- (id)getAppletStateAndHistory:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
- (id)parseHCIEvent:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withTransceiver:(id)a4 withError:(id *)a5;
- (id)processEndOfTransaction:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;

@end
