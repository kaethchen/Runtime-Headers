@class NSString;

@interface MRRapportTransportConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *deviceUID;
@property (retain, nonatomic) NSString *sessionUID;
@property (retain, nonatomic) NSString *name;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
