@class NSArray, NSString;

@interface GDViewQuery : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *names;
@property (readonly, nonatomic) NSString *schedule;
@property (readonly, nonatomic) BOOL includeDependencies;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAll;
- (id)initWithNames:(id)a0 includeDependencies:(BOOL)a1;
- (id)initWithSchedule:(id)a0 includeDependencies:(BOOL)a1;

@end
