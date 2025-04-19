@interface AMActionPropertyListXPCToken : AMXPCToken

@property (retain) id propertyList;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPropertyList:(id)a0;
- (id)_am_convertFromXPCWithWorkflow:(id)a0;

@end
