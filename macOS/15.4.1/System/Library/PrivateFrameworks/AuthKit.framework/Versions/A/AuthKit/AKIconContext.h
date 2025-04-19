@class NSData, NSNumber, NSString;

@interface AKIconContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSNumber *scale;
@property (nonatomic) unsigned long long maskingStyle;
@property (retain, nonatomic) NSString *appName;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
