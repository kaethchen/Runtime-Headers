@interface _EXExtensionAvailablility : NSObject <NSSecureCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) void /* unknown type, empty encoding */ enabledCount;
@property (nonatomic) void /* unknown type, empty encoding */ disabledCount;
@property (nonatomic) void /* unknown type, empty encoding */ unelectedCount;

+ (id)addChangeObserver:(id /* block */)a0;
+ (void)removeChangeObserver:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
