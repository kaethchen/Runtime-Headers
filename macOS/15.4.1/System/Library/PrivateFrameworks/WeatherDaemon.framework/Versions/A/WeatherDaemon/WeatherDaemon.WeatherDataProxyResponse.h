@interface WeatherDaemon.WeatherDataProxyResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ responses;
    void /* unknown type, empty encoding */ error;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
