@class NSArray;

@interface ISyncSimplyIgnoreLocalsFilter : NSObject <ISyncFiltering> {
    NSArray *_entityNames;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEntityNames:(id)a0;
- (BOOL)shouldApplyRecord:(id)a0 withRecordIdentifier:(id)a1;
- (id)supportedEntityNames;

@end
