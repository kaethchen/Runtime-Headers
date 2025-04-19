@class NSString, NSMutableDictionary;

@interface IOBTEASession : NSObject {
    NSMutableDictionary *mVersionStrings;
}

@property (retain) NSString *endpointUUID;
@property unsigned char eaMatchAction;
@property BOOL isSessionOpen;
@property BOOL hasReceivedData;

- (void).cxx_destruct;

@end
