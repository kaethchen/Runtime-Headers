@class NSString;

@interface SiriKitRuntime.StartExecutionTurn : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ executionRequestId;
    void /* unknown type, empty encoding */ rootRequestId;
    void /* unknown type, empty encoding */ sessionId;
    void /* unknown type, empty encoding */ isTapToEdit;
    void /* unknown type, empty encoding */ isMUXEnabled;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
