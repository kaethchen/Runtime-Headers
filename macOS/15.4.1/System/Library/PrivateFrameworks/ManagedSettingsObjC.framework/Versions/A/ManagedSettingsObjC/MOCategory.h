@class NSString;

@interface MOCategory : NSObject <MOPersistable, NSCopying>

@property (class, readonly) MOCategory *all;

@property (readonly, nonatomic) id persistableValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *identifier;

+ (id)initializeWithPersistableValue:(id)a0;
+ (BOOL)isValidPersistableRepresentation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
