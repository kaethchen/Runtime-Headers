@class NSString, NSArray, NSDate;

@interface TPSContextualRule : TPSSerializableObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *eventIdentifiers;
@property (copy, nonatomic) NSDate *matchedDate;

+ (BOOL)supportsSecureCoding;
+ (id)eventsForRuleDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)restartTracking;

@end
