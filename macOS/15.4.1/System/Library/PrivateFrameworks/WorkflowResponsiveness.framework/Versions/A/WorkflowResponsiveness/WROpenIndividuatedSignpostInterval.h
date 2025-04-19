@class NSString, WRSignpost, WRTimestampAndThread;

@interface WROpenIndividuatedSignpostInterval : NSObject {
    WRSignpost *_signpost;
    NSString *_individuationIdentifier;
    WRTimestampAndThread *_timestampAndThread;
}

- (void).cxx_destruct;

@end
