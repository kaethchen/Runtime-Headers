@class NSNumber;

@interface ATXHeuristicObjectHandle : NSObject <NSSecureCoding> {
    NSNumber *_deviceHandle;
    NSNumber *_objHandle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id obj;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0 wrapping:(id)a1;

@end
