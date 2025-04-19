@class WFWorkflowDescriptor;
@protocol WFPropertyListObject;

@interface WFContextualWorkflowDescriptor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFWorkflowDescriptor *descriptor;
@property (readonly, nonatomic) id<WFPropertyListObject> serializedRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDescriptor:(id)a0 serializedRepresentation:(id)a1;

@end
