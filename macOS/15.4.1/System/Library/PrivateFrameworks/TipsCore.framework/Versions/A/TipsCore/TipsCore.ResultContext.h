@class NSString;

@interface TipsCore.ResultContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ resultId;
    void /* unknown type, empty encoding */ contextData;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
