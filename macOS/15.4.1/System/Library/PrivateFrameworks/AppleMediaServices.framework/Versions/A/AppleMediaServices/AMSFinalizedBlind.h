@class NSData, NSString;

@interface AMSFinalizedBlind : NSObject {
    void /* unknown type, empty encoding */ finalizedData;
    void /* unknown type, empty encoding */ privateInput;
    void /* unknown type, empty encoding */ timestamp;
    void /* unknown type, empty encoding */ adamId;
}

@property (nonatomic, readonly) NSData *finalizedData;
@property (nonatomic, readonly) NSData *privateInput;
@property (nonatomic, readonly) NSString *timestamp;
@property (nonatomic, readonly) NSString *adamId;

+ (id)finalizedBlindWith:(id)a0 privateInput:(id)a1 timestamp:(id)a2 adamId:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFinalizedData:(id)a0 privateInput:(id)a1 timestamp:(id)a2 adamId:(id)a3;

@end
