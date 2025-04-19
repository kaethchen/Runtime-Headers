@class NSString;

@interface SiriTTSInlineStreamingSignal : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ identifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0 identifier:(id)a1;

@end
