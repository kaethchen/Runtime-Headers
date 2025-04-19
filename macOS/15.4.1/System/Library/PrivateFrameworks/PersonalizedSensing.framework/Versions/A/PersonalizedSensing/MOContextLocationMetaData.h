@class NSString, NSDateInterval;

@interface MOContextLocationMetaData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateInterval *visitTimeWindow;
@property (readonly, copy, nonatomic) NSString *place;
@property (readonly, copy, nonatomic) NSString *city;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlace:(id)a0 city:(id)a1;
- (id)initWithPlace:(id)a0 city:(id)a1 visitTimeWindow:(id)a2;

@end
