@class NSString, NSUnit, NSDate, NSNumber;
@protocol NSCoding, NSObject;

@interface WFRowTemplateValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) Class contentItemClass;
@property (readonly, nonatomic) NSString *contentPropertyName;
@property (readonly, nonatomic) long long comparisonOperator;
@property (readonly, nonatomic) BOOL removable;
@property (retain, nonatomic) id<NSObject, NSCoding> enumeration;
@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) NSNumber *boolean;
@property (retain, nonatomic) NSNumber *number;
@property (retain, nonatomic) NSString *phone;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSNumber *calendarUnit;
@property (retain, nonatomic) NSNumber *byteCountUnit;
@property (retain, nonatomic) NSUnit *measurementUnit;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *anotherDate;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentItemClass:(Class)a0 contentPropertyName:(id)a1 comparisonOperator:(long long)a2 removable:(BOOL)a3;

@end
