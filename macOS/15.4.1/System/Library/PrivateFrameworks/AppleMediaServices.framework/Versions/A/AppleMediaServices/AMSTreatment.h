@class NSDictionary, NSString, NSDate;

@interface AMSTreatment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long participationType;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSDate *endDate;
@property (readonly, copy) NSString *identifier;
@property (readonly) NSDate *startDate;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEndDate:(id)a0 identifier:(id)a1 startDate:(id)a2;

@end
