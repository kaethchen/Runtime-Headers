@class AMSCB1PUTF8String;

@interface AMSCB1PMediaToken : NSObject {
    AMSCB1PUTF8String *_token;
    double _issueTimestamp;
    double _expirationTimestamp;
    double _refreshThresholdPercentage;
}

- (void).cxx_destruct;

@end
