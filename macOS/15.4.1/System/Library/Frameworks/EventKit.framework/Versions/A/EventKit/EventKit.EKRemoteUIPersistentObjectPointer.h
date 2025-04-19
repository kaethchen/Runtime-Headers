@interface EventKit.EKRemoteUIPersistentObjectPointer : NSObject <NSSecureCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ objectID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isPendingInsert;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
