@class NSString, XCTSignpostEvent;

@interface XCTSignpostInterval : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *subsystem;
@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) XCTSignpostEvent *beginEvent;
@property (readonly, copy, nonatomic) XCTSignpostEvent *endEvent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSignpostInterval:(id)a0;
- (id)initWithSubsystem:(id)a0 category:(id)a1 name:(id)a2 beginEvent:(id)a3 endEvent:(id)a4;

@end
