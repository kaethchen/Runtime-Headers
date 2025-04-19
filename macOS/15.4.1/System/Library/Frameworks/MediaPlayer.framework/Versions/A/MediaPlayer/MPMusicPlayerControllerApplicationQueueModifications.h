@class NSDictionary, NSArray;

@interface MPMusicPlayerControllerApplicationQueueModifications : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *insertedDescriptors;
@property (readonly, nonatomic) NSArray *removedItemIdentifiers;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInsertedDescriptors:(id)a0 removedItemIdentifiers:(id)a1;

@end
