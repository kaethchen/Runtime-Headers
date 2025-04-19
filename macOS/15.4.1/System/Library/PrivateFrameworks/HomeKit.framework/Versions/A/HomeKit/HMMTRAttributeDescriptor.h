@class NSNumber, NSSet, NSString;

@interface HMMTRAttributeDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSNumber *nodeID;
@property (readonly, copy) NSSet *attributePaths;
@property (readonly, copy) NSString *controllerID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMTRDevice:(id)a0 attributePaths:(id)a1;
- (id)initWithMTRDevice:(id)a0 controllerID:(id)a1 attributePaths:(id)a2;
- (id)initWithMTRDeviceNodeID:(id)a0 controllerID:(id)a1 attributePaths:(id)a2;

@end
