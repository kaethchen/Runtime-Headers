@class NSNumber, NSDate;

@interface XProtectUpdateMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSNumber *previousVersion;
@property (retain, nonatomic) NSNumber *selectedSource;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVersion:(id)a0 andDate:(id)a1;
- (id)initWithVersion:(id)a0 andDate:(id)a1 andPreviousVersion:(id)a2 andSelectedSource:(id)a3;

@end
