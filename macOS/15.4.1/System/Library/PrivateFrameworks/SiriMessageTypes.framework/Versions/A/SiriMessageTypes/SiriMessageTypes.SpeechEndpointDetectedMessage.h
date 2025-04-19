@class NSString;

@interface SiriMessageTypes.SpeechEndpointDetectedMessage : SiriMessageTypes.RequestMessageBase {
    void /* unknown type, empty encoding */ endpointTime;
}

@property (nonatomic, readonly) NSString *description;

@end
