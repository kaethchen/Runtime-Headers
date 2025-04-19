@class NSString;

@interface SiriMessageTypes.CancelRequestMessage : SiriMessageTypes.EndRequestMessageBase {
    void /* unknown type, empty encoding */ reason;
}

@property (nonatomic, readonly) NSString *description;

@end
