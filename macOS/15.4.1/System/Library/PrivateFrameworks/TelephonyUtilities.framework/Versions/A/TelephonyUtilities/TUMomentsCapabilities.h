@class NSSet;

@interface TUMomentsCapabilities : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int availability;
@property (readonly, copy, nonatomic) NSSet *supportedMediaTypes;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAvailability:(int)a0 supportedMediaTypes:(id)a1;
- (BOOL)isEqualToCapabilities:(id)a0;

@end
