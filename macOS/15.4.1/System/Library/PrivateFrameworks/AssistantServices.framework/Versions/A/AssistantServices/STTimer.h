@class NSString, NSNumber, NSDate;

@interface STTimer : STSiriModelObject

@property (copy, nonatomic) NSString *timerId;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSNumber *value;
@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *label;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
