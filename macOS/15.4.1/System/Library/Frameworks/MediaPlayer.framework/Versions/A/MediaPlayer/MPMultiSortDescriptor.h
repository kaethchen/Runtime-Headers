@class NSDictionary;

@interface MPMultiSortDescriptor : NSSortDescriptor

@property (copy, nonatomic) NSDictionary *relatedProperties;

+ (BOOL)supportsSecureCoding;
+ (id)sortDescriptorWithRelatedProperties:(id)a0 ascending:(BOOL)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
